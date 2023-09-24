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

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>
#include <cmath>
#include <regex>

class BitcoinExchange
{
private:
    std::map<std::string, std::string> _price_map;

public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);
    double get_price(std::string key);
    void print_map();
    void handle_input_file(char *file_name);
    bool check_value_format(const std::string &value_str);
    bool check_date_format(const std::string &date_str);
    void print_result(const std::string &date, const std::string &value);
};
#endif

#include <chrono>
class Timer
{
private:
    std::string _label;
    std::chrono::time_point<std::chrono::high_resolution_clock> m_StartTimepoint;

public:
    Timer()
    {
        m_StartTimepoint = std::chrono::high_resolution_clock::now();
    }
    Timer(const std::string &label)
        : _label(label)
    {
        m_StartTimepoint = std::chrono::high_resolution_clock::now();
    }
    ~Timer()
    {
        Stop();
    }
    void Stop()
    {
        std::chrono::high_resolution_clock::time_point endTimepoint = std::chrono::high_resolution_clock::now();
        long long start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTimepoint).time_since_epoch().count();
        long long end = std::chrono::time_point_cast<std::chrono::microseconds>(endTimepoint).time_since_epoch().count();
        long long duration = end - start;
        double milliseconds = duration * 0.001;

        std::cout << "\033[0;34m"
                  << "Timer:	";
        std::cout << "\033[0;33m" << duration << "µs	" << milliseconds << "ms	";
        if (_label != "")
        {
            std::cout << "\033[0;32m(" << _label << ")";
        }
        std::cout << std::endl;
    }
};