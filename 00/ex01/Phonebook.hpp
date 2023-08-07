/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:24:38 by josephalber       #+#    #+#             */
/*   Updated: 2023/08/07 02:01:26 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class Phonebook {

	private:
		Contact 	contact_array[8];
		int			contact_array_size;
	
	public:
		Phonebook();
		void	add_contact(const Contact &contact);
		Contact	get_contact(int index) const;
		int		get_contact_array_size() const;
		int		add_contact();
		int		search();
};
#endif