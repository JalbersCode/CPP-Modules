/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:24:38 by josephalber       #+#    #+#             */
/*   Updated: 2023/08/10 15:54:35 by jalbers          ###   ########.fr       */
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
		void	add_contact_to_array(const Contact &contact);
		Contact	get_contact(int index) const;
		int		get_contact_array_size() const;
		int		add_contact();
		int		search();
};
#endif