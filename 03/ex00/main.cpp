/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:11:29 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/15 17:18:34 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
    ClapTrap pickachu("Pickachu");
    ClapTrap turtle("Turtle");
    ClapTrap rat("Rat");

    pickachu.attack("Rat");
    rat.takeDamage(1);
    rat.beRepaired(1);
    
    return (0);
}