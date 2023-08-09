/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:45:33 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/09 08:15:20 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string weapon_type)
	: type(weapon_type)
{
	
}

Weapon::~Weapon(void)
{
	
}

const std::string&	Weapon::getType(void) const
{
	return (this->type);
}


void	Weapon::setType(std::string weapon_type)
{
	this->type = weapon_type;
}