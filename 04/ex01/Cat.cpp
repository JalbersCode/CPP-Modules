/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:54:23 by jalbers           #+#    #+#             */
/*   Updated: 2023/09/10 17:29:35 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
    : Animal("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::~Cat()
{
    delete (this->_brain);
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_type = other._type;
    this->_brain = new Brain();
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Copy assignemnt constructor called" << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
        delete(this->_brain);
        this->_brain = new Brain();
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Miauuuuu" << std::endl;
    return;
}