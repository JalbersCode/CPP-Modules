/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:40:18 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/15 16:06:03 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
    : fixed_num(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    // this->fixed_num = num << num_of_fractional_bits;
    this->fixed_num = num * (1 << num_of_fractional_bits);
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_num = roundf(num * ( 1 << num_of_fractional_bits));
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_num = other.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->fixed_num = other.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (fixed_num);
}

void    Fixed::setRawBits(int const raw)
{
    this->fixed_num = raw;
}

float   Fixed::toFloat( void ) const
{
    float   num;

    num = (float)this->fixed_num / (1 << num_of_fractional_bits);
    return (num);
}

int Fixed::toInt( void ) const
{
    int num;

    num = this->fixed_num >> 8;
    return (num);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed_obj)
{
    os << (float)fixed_obj.getRawBits() / (1 << 8);
    return (os);
}
