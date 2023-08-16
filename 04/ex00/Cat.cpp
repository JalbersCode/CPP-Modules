/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:54:23 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/16 12:25:29 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
    : Animal("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
}

void    Cat::makeSound(void) const
{
    std::cout << "Miauuuuu" << std::endl;
    return;    
}