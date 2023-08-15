/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:46:13 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/15 17:19:04 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
    : _hit_points(10),  _energy_points(10), _attack_damage(0)
{
    this->_name = name;
    std::cout << name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->_name << " has died!" << std::endl;
}

std::string ClapTrap::get_name(void)
{
    return (this->_name);    
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hit_points == 0 || this->_energy_points == 0)
        return;
    std::cout << this->_name << " attacks " << target << std::endl;
    (void)_attack_damage;
    this->_energy_points--;    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points == 0 || this->_energy_points == 0)
        return;
    this->_hit_points -= amount; 
    std::cout << this->_name << " has taken " << amount << " damage. ";
    std::cout << this->_hit_points << " hit points left." << std::endl;    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_points == 0 || this->_energy_points == 0)
        return;
    this->_hit_points += amount; 
    this->_energy_points--;    
    std::cout << this->_name << " repairs itself. Hit points increased to " << _hit_points << std::endl;
}