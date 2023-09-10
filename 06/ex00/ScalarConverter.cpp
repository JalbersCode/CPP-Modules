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

double  convertToDouble(std::string str)
{
    double  num;
    
    if (str.length() == 1 && str[0] < 0 + '0' && str[0] > 9 + '0')
        return (str[0]);
    try
    {
        num = std::stod(str);
    }
    catch(const std::out_of_range& e)
    {
        if (str[0] == '-')
            num = -std::numeric_limits<double>::infinity();
        else
            num = std::numeric_limits<double>::infinity();
    }
    return (num);
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
    double  d = static_cast<double>(num);
    std::cout << d << std::endl;
}

void ScalarConverter::convert(std::string str_literal)
{
    try
    {
        double num = convertToDouble(str_literal);
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