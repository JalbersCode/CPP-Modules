/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:55:34 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/07 22:30:27 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "newZombie.cpp"
#include "randomChump.cpp"

int main(void)
{
	Zombie*	zombie_1;

	zombie_1 = newZombie("Udo");
	randomChump("Mark");	
	delete(zombie_1);
	return (0);
}