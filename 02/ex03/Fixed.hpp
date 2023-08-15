/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:19:18 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/15 16:04:39 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					fixed_num;
		static const int	num_of_fractional_bits = 8;


	public:
		Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed& other);
		~Fixed();
		Fixed& 	operator=(const Fixed& other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float 	toFloat( void ) const;
		int 	toInt( void ) const;
		bool    operator<(const Fixed& fixed_obj) const;
		bool    operator>(const Fixed& fixed_obj) const;
		bool    operator>=(const Fixed& fixed_obj) const;
		bool    operator<=(const Fixed& fixed_obj) const;
		bool    operator==(const Fixed& fixed_obj) const;
		bool    operator!=(const Fixed& fixed_obj) const;
		float	operator+(const Fixed& fixed_obj) const;
		float	operator-(const Fixed& fixed_obj) const;
		float	operator*(const Fixed& fixed_obj) const;
		float	operator/(const Fixed& fixed_obj) const;
		float	operator++(void);
		float	operator++(int);
		float	operator--(void);
		float	operator--(int);

		static Fixed&			min(Fixed& obj1, Fixed& obj2);
		static const Fixed&	min(const Fixed& obj1, const Fixed& obj2);
		static Fixed&			max(Fixed& obj1, Fixed& obj2);
		static const Fixed&	max(const Fixed& obj1, const Fixed& obj2);
};
		std::ostream&	operator<<(std::ostream& os, const Fixed& fixed_obj);
#endif