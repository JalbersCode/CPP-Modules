/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:21:55 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/21 18:26:09 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
    : _name(name), _materia_count(0)
{
    
}

Character::Character(const Character& other)
    : _name(other.getName()), _materia_count(0)
{
    for (int i = 0; i < other._materia_count; i++)
        this->equip(other._materia_array[i]->clone());
    for (size_t i = 0; i < other._past_materias.size(); i++)
        this->_past_materias.push_back(other._past_materias[i]->clone());
}

Character::~Character()
{
    for (int i = 0; i < this->_materia_count; i++)
        delete (_materia_array[i]);
    for (size_t i = 0; i < this->_past_materias.size(); i++)
        delete (_past_materias[i]);
}

std::string const &Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
    if (this->_materia_count == 4)
        return;
    int i = 0;
    while (i < this->_materia_count)
        i++;
    this->_materia_array[i] = m;
    this->_materia_count++; 
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= this->_materia_count)
        return;
    _past_materias.push_back(this->_materia_array[idx]);
    for (; idx < this->_materia_count - 1; idx++)
        _materia_array[idx] = _materia_array[idx + 1];
    this->_materia_array[idx] = NULL;
    this->_materia_count--;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= this->_materia_count)
        return;
    this->_materia_array[idx]->use(target);
}