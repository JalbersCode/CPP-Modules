/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:46:04 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/16 15:27:29 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    private:
        std::string  _type;

    public:
        Animal();
        virtual ~Animal();
        Animal(std::string type_name);
        std::string getType(void) const;
        virtual void    makeSound(void) const;

};
#endif