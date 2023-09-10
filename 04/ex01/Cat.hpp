/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:53:07 by jalbers           #+#    #+#             */
/*   Updated: 2023/09/10 17:08:23 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:
        Brain*  _brain;

    public:
        Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
        ~Cat();
        void    makeSound(void) const;

};
#endif