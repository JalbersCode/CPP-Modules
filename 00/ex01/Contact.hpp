/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:00:22 by josephalber       #+#    #+#             */
/*   Updated: 2023/08/07 02:01:30 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
	void set_value(const std::string &input, int field);
	std::string get_value(int field) const; 
	void	print_contact_teaser(int index);
	void	print_complete_contact();
};
std::string		get_formatted_string(const std::string &input_str);
void			print_header();

#endif