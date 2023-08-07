/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:59:58 by josephalber       #+#    #+#             */
/*   Updated: 2023/08/07 01:54:53 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main() {
	std::string userInput;

	Phonebook	phonebook;

	std::cout << "Welcome. Type one of these commands: ADD, SEARCH, EXIT" << std::endl;
	while (1)
	{
		std::getline(std::cin, userInput);
		if (userInput == "ADD")
			phonebook.add_contact();
		else if (userInput == "SEARCH")
			phonebook.search();
		else if (userInput == "EXIT")
			break ; 
	}
	return 0;
}