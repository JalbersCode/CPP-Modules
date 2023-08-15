/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:46:13 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/15 19:30:19 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
    : _hit_points(10),  _energy_points(10), _attack_damage(0)
{
    this->_name = name;
    std::cout << "ClapTrap "<< name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " has died!" << std::endl;
}

std::string ClapTrap::get_name(void)
{
    return (this->_name);    
}

int ClapTrap::get_attack_damage(void)
{
    return (this->_attack_damage);    
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hit_points == 0 || this->_energy_points == 0)
        return;
    std::cout << this->_name << " attacks " << target << " with " << _attack_damage << " attack damage."<< std::endl;
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

void    ClapTrap::set_hit_points(unsigned int amount)
{
    this->_hit_points = amount;
}

void    ClapTrap::set_energy_points(unsigned int amount)
{
    this->_energy_points = amount;
}

void    ClapTrap::set_attack_damage(unsigned int amount)
{
    this->_attack_damage = amount;
}