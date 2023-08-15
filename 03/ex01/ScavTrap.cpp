/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:33:18 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/15 17:57:47 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name)
{
    this->set_hit_points(100);
    this->set_energy_points(50);
    this->set_attack_damage(20);
    std::cout << "Scavtrap " << name << " has been created." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scavtrap " << this->get_name() << " has died." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->get_name() << " is now in Gatekeeper mode!" << std::endl;
}