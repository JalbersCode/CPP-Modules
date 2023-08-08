/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:41:49 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/08 19:17:13 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class	HumanB
{
	private:
		std::string			name;
		const Weapon*		weapon;

	public:
		HumanB(const std::string& name);
		~HumanB();
		void    setWeapon(const Weapon& weapon_obj);
		void	attack() const;
};

#endif