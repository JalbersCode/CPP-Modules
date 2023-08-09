/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:52:35 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/09 17:44:29 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    
}

Harl::~Harl()
{
    
}

void    Harl::debug(void)
{
    std::cout << "blablablablabla debug" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "bla bla bla bla info" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "wa wa warning stuff" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "errerrerrerrreoeeerererererooooooooooooooor" << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string levels[] = {"debug", "info", "warning", "error"};
    void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;
    while (i < 4)
    {
        if (level == levels[i])
        {
            (this->*functions[i])();
            return ;
        }
        i++;
    }
    std::cout << "This complaint does not exist..." << std::endl;
}