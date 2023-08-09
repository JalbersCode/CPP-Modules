/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 08:18:42 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/09 16:46:44 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
		return (std::cout << "Wrong number of arguments" << std::endl, 1);
	if (!argv[2][0])
		return (std::cout << "Search string cannot be empty..." << std::endl, 1);
	Sed	sed_obj(argv[1], argv[2], argv[3]);
	if (sed_obj.replace() == 1)
		return (1);
	return (0);	
}