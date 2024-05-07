/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:47:13 by josephalber       #+#    #+#             */
/*   Updated: 2023/09/11 00:24:34 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    (void)other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    if (this != &other)
    {
        
    }
    return (*this);
}

double convertToDouble(const std::string& str)
{
    double num = 0;
    int i = 0;
    int sign = 1;
    int decimal_pos = -1;
    int num_len = str.length();

    if (str[num_len - 1] == 'f')
        num_len--;
    if (num_len == 1) 
    {
        if (isdigit(str[0]))
            num = str[0] - '0';
        else
            num = static_cast<int>(str[0]); 
        return num;
    }
    if (str[i] == '-') {
        sign = -1;
        i++;
    }
    while (str[i]) {
        if (str[i] == '.')
            decimal_pos = i;
        else if (!isdigit(str[i])) {
            if (!(str[i] == 'f' && !str[i + 1]))
                throw (std::exception());
        } 
        else {
            num *= 10;
            num += str[i] - '0';
        }
        i++;
    }
    if (decimal_pos != -1)
        num /= std::pow(10, (num_len - decimal_pos - 1));
    return (sign * num);
}

void print_char(double num)
{
    std::cout << "char: ";
    if (std::isnan(num) || std::isinf(num))
        std::cout << "impossible\n";
    else if (num < 32 || num > 126)
        std::cout << "Non displayable\n";
    else
        std::cout << static_cast<char>(num) << std::endl;   
}

void print_int(double num)
{
    std::cout << "int: ";
    if (std::isnan(num) || std::isinf(num))
        std::cout << "impossible\n";
    else if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max())
        std::cout << "Non displayable\n";
    else
        std::cout << static_cast<int>(num) << std::endl;
}

void print_float(double num)
{
    std::cout << "float: ";
    float   f = static_cast<float>(num);
    std::cout << f << 'f' << std::endl;
    
}

void print_double(double num)
{
    std::cout << "double: ";
    if (std::isinf(num)) {
        if (num < 0)
            std::cout << "-";
        std::cout << "inff" << std::endl;
    } else {
        double  d = static_cast<double>(num);
        std::cout << d << std::endl;
    }
}

void ScalarConverter::convert(std::string str_literal)
{
    try
    {
        double num = convertToDouble(str_literal);
        // std::cout << "ConvertToDouble: " << num << std::endl;
        print_char(num);
        print_int(num);
        print_float(num);
        print_double(num);
    }
    catch(const std::exception& e)
    {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: impossible\n";
        std::cout << "double: impossible\n";
    }
}