/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:40:13 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/21 17:58:33 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    private:


    public:
        Cure();
        Cure(const Cure& other);
        ~Cure();
        AMateria *clone() const;
        void use(ICharacter &target);

};
#endif