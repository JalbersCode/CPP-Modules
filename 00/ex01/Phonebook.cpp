/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:24:16 by josephalber       #+#    #+#             */
/*   Updated: 2023/08/07 20:39:16 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() {
	this->contact_array_size= 0;
}

void	Phonebook::add_contact_to_array(const Contact &contact) {
	if (contact_array_size == 8)
		contact_array[7] = contact;
	else {
		contact_array[contact_array_size] = contact;
		contact_array_size++;
	}
}

Contact Phonebook::get_contact(int index) const {
	Contact contact;
	contact = contact_array[index];
	return (contact);
}

int	Phonebook::get_contact_array_size() const {
	return (contact_array_size);
}

int Phonebook::add_contact() {
	std::string userInput;
	Contact		contact;
	std::string	labels[5] = {"First Name: ", "Last Name: ", "Nickname: ", "Phone Number: ", "Darkest Secret: "};

	for (int i = 0; i < 5; i++) {
		std::cout << labels[i];
		std::getline(std::cin, userInput);
		if (userInput == "") {
			std::cout << "Invalid input." << std::endl;
			i--;
		}
		else
			contact.set_value(userInput, i);
	}
	this->add_contact_to_array(contact);
	std::cout << "Contact added successfully!" << std::endl;
	return (0);
}

int	prompt_user_to_select_contact(int index_of_last_contact) {
	std::string		user_input;
	int				selected_index;

	std::cout << "Enter index of contact to display: ";
	std::getline(std::cin, user_input);
	if (user_input.length() > 1) {
		std::cout << "Pls enter a single digit" << std::endl;
		return (prompt_user_to_select_contact(index_of_last_contact));
	}
	selected_index = user_input[0] - '0';	
	if (selected_index < 0 || selected_index > index_of_last_contact) {
		std::cout << "Index does not exist. Try again." << std::endl;
		return (prompt_user_to_select_contact(index_of_last_contact));
	}
	return (selected_index);
}

int	Phonebook::search() {
	int	array_size;
	int	i;
	int	index_of_selected_contact;

	array_size = this->get_contact_array_size();
	print_header();
	for (i = 0; i < array_size; i++) {
		this->get_contact(i).print_contact_teaser(i);
	}
	index_of_selected_contact = prompt_user_to_select_contact(i - 1);
	this->get_contact(index_of_selected_contact).print_complete_contact();
	return (0);
}