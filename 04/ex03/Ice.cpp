/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:36:29 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/21 18:21:33 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
    : AMateria("ice")
{
    
}

Ice::Ice(const Ice& other)
    : AMateria("ice")
{
    (void)other;
}

Ice::~Ice()
{
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;  
}

AMateria* Ice::clone() const
{
    Ice* ice_clone = new Ice();
    return (ice_clone);
}