/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:46:04 by jalbers           #+#    #+#             */
/*   Updated: 2023/09/10 17:28:11 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>

class Animal
{
    protected:
        std::string  _type;

    public:
        Animal();
        virtual ~Animal();
        Animal(std::string type_name);
        std::string getType(void) const;
        virtual void    makeSound(void) const;

};
#endif