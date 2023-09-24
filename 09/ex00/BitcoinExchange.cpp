/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Jalbers42                                         #+#    #+#             */
/*   https://github.com/Jalbers42                     ###   ###########       */
/*                                                                            */
/******************************************************************************/

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::ifstream myfile;
    std::string date;
    std::string price;

    myfile.open("data.csv", std::ios::in);
    if (myfile.is_open())
    {
        std::getline(myfile, date);
        while (std::getline(myfile, date, ','))
        {
            std::getline(myfile, price);
            _price_map[date] = price;
        }
    }
    myfile.close();
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    (void)other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
    }
    return (*this);
}

double BitcoinExchange::get_price(std::string key)
{
    double double_value;

    std::map<std::string, std::string>::iterator upperBound = _price_map.upper_bound(key);
    if (upperBound != _price_map.begin())
        --upperBound;
    double_value = std::atof(upperBound->second.c_str());
    return (double_value);
}

void BitcoinExchange::print_map()
{
    std::map<std::string, std::string>::iterator it;

    it = _price_map.begin();
    for (; it != _price_map.end(); it++)
    {
        std::cout << it->first << " " << it->second << std::endl;
    }
}

void BitcoinExchange::handle_input_file(char *file_name)
{
    std::ifstream myfile;
    std::string line;
    std::string date;
    std::string value;

    myfile.open(file_name, std::ios::in);
    if (!myfile.is_open())
        throw std::runtime_error("Error: could not open file");
    std::getline(myfile, line);
    while (std::getline(myfile, line))
    {
        std::istringstream tokenStream(line);
        std::getline(tokenStream, date, '|');
        if (!std::getline(tokenStream, value))
        {
            std::cout << "Error: Bad input => " << line << std::endl;
            continue; 
        }
        print_result(date, value);
    }
    myfile.close();
}

bool BitcoinExchange::check_value_format(const std::string &value_str)
{
    try
    {
        float value = std::stof(value_str);
        if (value < 0)
        {
            std::cout << "Error: Number is negative\n";
            return (false);
        }
        else if (value > 1000)
        {
            std::cout << "Error: Number is too large\n";
            return (false);
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        return (false);
    }
    return true;
}

bool BitcoinExchange::check_date_format(const std::string &date_str)
{
    std::string pattern("\\s*(\\d{4})-(0[1-9]|1[0-2])-(0[1-9]|[1-2][0-9]|3[0-1])\\s*");
    std::regex dateRegex(pattern);
    if (!std::regex_match(date_str, dateRegex))
    {
        std::cout << "Error: Bad date format\n";
        return (false);
    }
    return true;
}

void BitcoinExchange::print_result(const std::string &date_str, const std::string &value_str)
{
    if (check_value_format(value_str) && check_date_format(date_str))
    {
        float value_float = std::stof(value_str);
        std::cout << date_str << " => " << value_float << " = ";
        std::cout << get_price(date_str) * value_float << std::endl;
    }
}