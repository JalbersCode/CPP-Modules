/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:04:53 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/08 19:17:52 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
    : name(name), weapon(NULL)
{
    
}

HumanB::~HumanB()
{
    
}

void    HumanB::attack(void) const
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(const Weapon& weapon_obj)
{
    this->weapon = &weapon_obj;
}