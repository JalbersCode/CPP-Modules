/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:34:47 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/17 16:50:28 by jalbers          ###   ########.fr       */
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
        ~Ice();
        void use(ICharacter &target);

};
#endif