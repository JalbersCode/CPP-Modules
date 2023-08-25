/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:31:21 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/25 17:39:11 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <cstdlib>
#include "MateriaSource.hpp"

// void*	operator	new(size_t size) throw(std::bad_alloc)
// {
//     std::cout << "Allocating " << size << " bytes" << std::endl;

//     return (malloc(size));
// }

int main(void)
{
    /*
    // Basic equip and unequid logic
    Character *char1 = new Character("Barack");
    std::cout <<  "Hi my name is " << char1->getName() << std::endl;
    Ice *ice = new Ice();
    Cure *cure = new Cure();
    char1->equip(ice);
    char1->equip(cure);
    Character *char2 = new Character(*char1);
    std::cout <<  "Hi my name is " << char2->getName() << std::endl;
    char1->unequip(0);
    char1->unequip(0);
    char1->use(0, *char2);
    char1->use(1, *char2);
    char2->use(0, *char1);
    char2->use(1, *char1);
    delete(char1);
    delete(char2);


    // Assignment operator and copy constructor
    Character *char3 = new Character("Superman");
    std::cout <<  "Hi my name is " << char3->getName() << std::endl;
    char3->equip(new Ice());
    char3->equip(new Cure());
    Character *char4 = new Character("Batman");
    std::cout <<  "Hi my name is " << char4->getName() << std::endl;
    char4->equip(new Ice());
    char4->equip(new Cure());
    // Assignment operator called because char4 already initialized
    *char4 = *char3;
    // Copy constructor called because char5 is not yet initialized
    Character   *char5 = new Character(*char4);
    delete(char3);
    delete(char4);
    delete(char5);


    // MateriaSource
    Character *char6 = new Character("Hulk");
    MateriaSource   materia_source = MateriaSource();
    Ice *ice2 = new Ice();
    Cure *cure2 = new Cure();
    materia_source.learnMateria(ice2);
    materia_source.learnMateria(ice2);
    materia_source.learnMateria(ice2);
    materia_source.learnMateria(ice2);
    materia_source.learnMateria(cure2);
    AMateria* materia_obj = materia_source.createMateria("cure");
    std::cout << materia_obj->getType() << std::endl;
    materia_obj->use(*char6);
    delete(ice2);
    delete(cure2);
    delete(materia_obj);
    delete(char6);

    // This will still work if AMateria use function is not declared as virtual
    Character *char7 = new Character("Hulk");
    Ice *ice3 = new Ice();
    ice3->use(*char7);
    delete(char7);
    delete(ice3);

    return (0);
    */



    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    // delete tmp;
}