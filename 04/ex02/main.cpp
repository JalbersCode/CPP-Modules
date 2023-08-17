/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:47:46 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/17 13:28:55 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#include <cstdlib>

// void*	operator	new(size_t size) throw(std::bad_alloc)
// {
//     std::cout << "Allocating " << size << " bytes" << std::endl;

//     return (malloc(size));
// }

int	main(void)
{
    int     array_size = 4;
    Animal*  animal_array[array_size];

    // CANT CALL THIS:
    // Animal animal = Animal();
    
    for (int i = 0; i < array_size; i++)
    {
        if (i % 2 == 0)
            animal_array[i] = new Dog();
        else
            animal_array[i] = new Cat();
    }
    
    for (int i = 0; i < array_size; i++)
            delete(animal_array[i]);
    return (0);
}
