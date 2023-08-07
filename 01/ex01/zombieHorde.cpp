/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:17:44 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/07 23:25:14 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombie_horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombie_horde[i].set_name(name);
	}
	return (zombie_horde);
}