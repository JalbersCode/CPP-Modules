/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:36:05 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/15 19:40:19 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
    : ClapTrap(name)
{
    this->set_hit_points(100);
    this->set_energy_points(100);
    this->set_attack_damage(30);
    std::cout << "Fragtrap " << name << " has been created." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap " << this->get_name() << " has died." << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << this->get_name() << " sends a high five request!" << std::endl;
}