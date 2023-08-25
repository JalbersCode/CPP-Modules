/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:50:50 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/25 17:39:40 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
    : _materia_count(0)
{
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < _materia_count; i++)
        delete (_materia_array[i]);
}

void MateriaSource::learnMateria(AMateria *materia_obj)
{
    if (_materia_count == 4)
    {
        delete (_materia_array[3]);
        _materia_array[3] = materia_obj;
    }
    else
    {
        _materia_array[_materia_count] = materia_obj;
        _materia_count++;
    }
}

int MateriaSource::find_materia_template(std::string const &type)
{
    int i = 0;

    while (i < 4)
    {
        if (this->_materia_array[i]->getType() == type)
            break;
        i++;
    }
    return (i);
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    int index = this->find_materia_template(type);

    if (index == 4)
        return (0);
    return (_materia_array[index]->clone());
}