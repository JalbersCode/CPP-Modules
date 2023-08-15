/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:58:41 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/15 20:46:44 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name), ScavTrap(name), FragTrap(name), _name(name)
{
    ClapTrap::_name = name + "_clap_name";
    FragTrap::_hit_points = 100;
    ScavTrap::_energy_points = 50;
    FragTrap::_attack_damage = 30;
    std::cout << "DiamondTrap " << name << " has been created." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->get_name() << " has died." << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "My name: " << _name << ", my claptrap name: " << ClapTrap::_name << std::endl; 
}