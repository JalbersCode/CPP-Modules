/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:21:55 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/17 16:51:38 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
    : _name(name)
{
    
}

Character::~Character()
{
}

std::string const &Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
   (void)m; 
}

void Character::unequip(int idx)
{
   (void)idx; 
}

void Character::use(int idx, ICharacter &target)
{
    (void)idx;
    (void)target;
}