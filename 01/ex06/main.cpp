/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:48:40 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/09 17:42:37 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
    Harl harl_obj;

    if (argc != 2)
    {
        std::cout << "YO! Thats the wrong amount of args..." << std::endl;
        return (1);
    }
    harl_obj.complain(argv[1]);
    return (0);
}