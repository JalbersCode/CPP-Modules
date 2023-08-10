/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:19:18 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/10 15:46:40 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					fixed_num;
		static const int	num_of_bits = 8;


	public:
		Fixed();
		Fixed(const Fixed& other);
		~Fixed();
		Fixed& 	operator=(const Fixed& other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};
#endif