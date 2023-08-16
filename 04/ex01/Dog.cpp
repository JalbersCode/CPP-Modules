/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:54:06 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/16 12:25:33 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
    : Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
}

void    Dog::makeSound(void) const

{
    std::cout << "WAU WAU" << std::endl;
    return;    
}