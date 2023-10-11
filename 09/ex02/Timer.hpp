/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Timer.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2023/10/11 18:05:47 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include <chrono>
#include <ctime>
#include <iostream>

class Timer
{
private:
    std::string _label;
    clock_t m_StartTimepoint;

public:
    Timer()
        : _label("")
    {
        m_StartTimepoint = clock();
    }
    Timer(const std::string& label)
        : _label(label)
    {
        m_StartTimepoint = clock();
    }
    ~Timer()
    {
        Stop();
    }
    void Stop()
    {
        clock_t endTime = clock();
        clock_t duration = endTime - m_StartTimepoint;
        double seconds = static_cast<double>(duration) / CLOCKS_PER_SEC * 1000.0;
        std::cout << "\033[0;34m" << "Timer: ";
        std::cout << "\033[0;33m" << duration << " ticks, " << seconds << " ms ";
        if (_label != "")
        {
            std::cout << "\033[0;32m(" << _label << ")";
        }
        std::cout << std::endl;
    }
};