/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:46:04 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/16 12:44:24 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    private:
        std::string  _type;

    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(std::string type_name);
        std::string getType(void) const;
        void    makeSound(void) const;

};
#endif