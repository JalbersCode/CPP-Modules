/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:41:49 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/09 08:14:01 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon
{
	private:
		std::string	type;

	public:
		Weapon(const std::string weapon_type);
		~Weapon(void);
		const std::string&	getType(void) const;
		void				setType(std::string weapon_type);
};

#endif