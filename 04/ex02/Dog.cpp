/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:54:06 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/17 12:15:52 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
    : Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::~Dog()
{
    delete(this->_brain);
    std::cout << "Dog destructor called" << std::endl;
}

void    Dog::makeSound(void) const

{
    std::cout << "WAU WAU" << std::endl;
    return;    
}