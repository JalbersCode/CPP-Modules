/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:40:18 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/15 15:58:25 by jalbers          ###   ########.fr       */
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
    std::cout << "Default constructor called" << std::endl;
    this->fixed_num = num << 8;
}

Fixed::Fixed(const float num)
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_num = num;
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
    std::cout << "GetRaBits member function called" << std::endl;
    return (fixed_num);
}

void    Fixed::setRawBits(int const raw)
{
    this->fixed_num = raw;    
}

float   Fixed::toFloat( void ) const
{
    return (0);    
}

int Fixed::toInt( void ) const
{
    return (0);    
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed_obj)
{
    os << fixed_obj.getRawBits();
    return (os);
}
