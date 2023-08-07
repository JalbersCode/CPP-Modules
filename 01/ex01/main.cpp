/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:55:34 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/07 23:30:23 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie*	zombie_horde_1;
	int		num_of_zombies;

	num_of_zombies = 5;
	zombie_horde_1 = zombieHorde(num_of_zombies, "Udo");
	for (int i = 0; i < num_of_zombies; i++) {
		zombie_horde_1[i].announce();
	}
	delete [] zombie_horde_1;
	return (0);
}