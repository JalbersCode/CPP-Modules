/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:11:29 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/15 19:29:32 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
    ScavTrap pickachu("Pickachu");
    ScavTrap turtle("Turtle");
    ScavTrap rat("Rat");

    pickachu.attack("Rat");
    rat.takeDamage(pickachu.get_attack_damage());
    rat.beRepaired(1);
    
    return (0);
}