/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:46:48 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/16 12:25:14 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
}

Animal::Animal(std::string type_name)
    : _type(type_name)
{
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

void    Animal::makeSound(void) const
{
    std::cout << "wauranshurissssss ***generic animal sound***" << std::endl;
    return;    
}