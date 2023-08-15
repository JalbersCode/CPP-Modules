/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:11:29 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/15 19:44:04 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
    ClapTrap pickachu("Pickachu");
    ScavTrap turtle("Turtle");
    FragTrap rat("Rat");

    pickachu.attack("Rat");
    rat.takeDamage(pickachu.get_attack_damage());
    rat.beRepaired(1);
    rat.attack("Turtle");
    turtle.takeDamage(rat.get_attack_damage());
    turtle.guardGate();
    rat.highFivesGuys();
    return (0);
}