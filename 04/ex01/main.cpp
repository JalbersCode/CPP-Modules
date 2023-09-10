/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:47:46 by jalbers           #+#    #+#             */
/*   Updated: 2023/09/10 17:58:38 by josephalber      ###   ########.fr       */
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

    for (int i = 0; i < array_size; i++)
    {
        if (i % 2 == 0)
            animal_array[i] = new Dog();
        else
            animal_array[i] = new Cat();
    }
    
    for (int i = 0; i < array_size; i++)
            delete(animal_array[i]);


    // test this for memory leaks..
    Cat *cat1 = new Cat();
    Cat *cat2 = new Cat();
    cat2 = cat1; 
            
    return (0);
}
