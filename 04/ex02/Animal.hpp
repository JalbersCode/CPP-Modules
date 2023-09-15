/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:46:04 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/17 13:29:01 by jalbers          ###   ########.fr       */
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
        Animal();
        Animal(std::string type_name);
    
    public:
        virtual ~Animal();
        std::string getType(void) const;
        virtual void    makeSound(void) const;

};
#endif