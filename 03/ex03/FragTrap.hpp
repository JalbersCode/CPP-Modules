/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:33:51 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/15 20:46:33 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    private:


    public:
        FragTrap(std::string name);
        ~FragTrap();
        void highFivesGuys(void);
};
#endif