/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:32:27 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/26 22:07:11 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *_materia_array[4];
    int _materia_count;

public:
    MateriaSource();
    ~MateriaSource();
    void learnMateria(AMateria *materia_obj);
    AMateria *createMateria(std::string const &type);
    int find_materia_template(std::string const &type);
    bool checkIfDuplicate(AMateria *materia_obj);
};
#endif