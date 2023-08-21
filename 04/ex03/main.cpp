/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:31:21 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/21 18:20:12 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

#include <cstdlib>
// void*	operator	new(size_t size) throw(std::bad_alloc)
// {
//     std::cout << "Allocating " << size << " bytes" << std::endl;

//     return (malloc(size));
// }

int	main(void)
{
    Character *char1 = new Character("Barack");
    Character *char2 = new Character("Donald");

    std::cout <<  "Hi my name is " << char1->getName() << std::endl; 
    
    Ice *ice = new Ice();
    Cure *cure = new Cure();
    char1->equip(ice);
    char1->equip(cure);

    Character *char3 = new Character(*char1);
    
    char1->unequip(0);
    char1->unequip(0);
    char1->use(0, *char2);
    char1->use(1, *char2);
    char3->use(0, *char2);
    char3->use(1, *char2);
    
    // delete(ice);
    // delete(cure);

    delete(char1);
    delete(char2);
    delete(char3);
    
    return (0);
}