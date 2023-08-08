/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:41:49 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/08 19:18:12 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class	HumanA
{
	private:
		std::string			name;
		const Weapon&		weapon;

	public:
		HumanA(const std::string& name, const Weapon& weapon);
		~HumanA();
		void	attack(void) const;
};

#endif