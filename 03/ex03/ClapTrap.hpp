/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:45:11 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/15 20:35:12 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int         _hit_points;
        int         _energy_points;
        int         _attack_damage;

    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        std::string get_name(void);
        int         get_attack_damage(void);
        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        void        set_hit_points(unsigned int amount);
        void        set_energy_points(unsigned int amount);
        void        set_attack_damage(unsigned int amount);

};
#endif