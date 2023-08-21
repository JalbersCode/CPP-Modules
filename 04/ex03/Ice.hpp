/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:34:47 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/21 18:21:52 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP 

#include "AMateria.hpp"

class Ice : public AMateria
{
    private:


    public:
        Ice();
        Ice(const Ice& other);
        ~Ice();
        AMateria *clone() const;
        void use(ICharacter &target);

};
#endif