/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:17:13 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/21 18:05:24 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <vector>

class Character : public ICharacter
{
private:
    const std::string       _name;
    AMateria                *_materia_array[4];
    int                     _materia_count;
    // AMateria                *_past_materia_array[4];
    // int                     _past_materia_count;
    std::vector<AMateria*>  _past_materias;

public:
    Character(std::string name);
    Character(const Character& other);
    ~Character();
    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target); 
};
#endif