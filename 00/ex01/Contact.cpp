/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 00:44:31 by josephalber       #+#    #+#             */
/*   Updated: 2023/08/07 14:40:20 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_value(const std::string &input, int field) {
	if (field == 0)
		first_name = input;
	else if (field == 1)
		last_name = input;
	else if (field == 2)
		nickname = input;
	else if (field == 3)
		phone_number = input;
	else if (field == 4)
		darkest_secret = input;
}

std::string Contact::get_value(int field) const {
	if (field == 0)
		return (first_name);
	else if (field == 1)
		return (last_name);
	else if (field == 2)
		return (nickname);
	else if (field == 3)
		return (phone_number);
	else if (field == 4)
		return (darkest_secret);
	else
		return ("Incorrect Field Number");
}

void	Contact::print_contact_teaser(int index) {
	std::string	index_str = std::to_string(index);

	std::cout << get_formatted_string(index_str) << "|";	
	std::cout << get_formatted_string(this->first_name) << "|";	
	std::cout << get_formatted_string(this->last_name) << "|";	
	std::cout << get_formatted_string(this->nickname) << "|" << std::endl;
}

void	Contact::print_complete_contact() {
	std::cout << "First Name:" << this->first_name << std::endl;
	std::cout << "Last Name:" << this->last_name << std::endl;
	std::cout << "Nickname:" << this->nickname << std::endl;
	std::cout << "Phone number:" << this->phone_number << std::endl;
	std::cout << "Darkest secret:" << this->darkest_secret << std::endl;
}
