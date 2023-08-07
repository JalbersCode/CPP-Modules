/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 01:58:02 by josephalber       #+#    #+#             */
/*   Updated: 2023/08/07 01:59:34 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string	get_formatted_string(const std::string &input_str) {
	std::string		final_str;
	int				input_str_length;
	int				i = 0;
	int				j = 0;

	input_str_length = input_str.length();
	for (; i < 10 - input_str_length; i++)
		final_str += ' ';
	for (; i < 10; i++)
		final_str += input_str[j++];
	if (input_str_length > 10)
		final_str[9] = '.';
	return (final_str);
}

void	print_header() {
	std::cout << get_formatted_string("Index") << "|";	
	std::cout << get_formatted_string("First Name") << "|";	
	std::cout << get_formatted_string("Last Name") << "|";	
	std::cout << get_formatted_string("Nickname") << "|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}