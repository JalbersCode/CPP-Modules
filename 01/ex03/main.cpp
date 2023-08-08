/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:40:59 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/08 19:10:08 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	Weapon		weapon1;
	Weapon		weapon2;

	std::string name = "tim";

	weapon1.setType("Sword");
	weapon2.setType("Axe");
	
	HumanA		bob(name, weapon1);
	HumanB		udo("udo");

	name = "marta";
	
	weapon1.setType("stick");
	udo.setWeapon(weapon2);
	// udo.setWeapon(weapon1);
	
	bob.attack();
	udo.attack();
	// std::cout << type_str << std::endl;
}