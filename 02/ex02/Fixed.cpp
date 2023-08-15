/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:40:18 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/15 16:05:56 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
    : fixed_num(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
    // std::cout << "Int constructor called" << std::endl;
    // this->fixed_num = num << num_of_fractional_bits;
    this->fixed_num = num * (1 << num_of_fractional_bits);
}

Fixed::Fixed(const float num)
{
    // std::cout << "Float constructor called" << std::endl;
    this->fixed_num = roundf(num * ( 1 << num_of_fractional_bits));
}

Fixed::Fixed(const Fixed& other)
{
    // std::cout << "Copy constructor called" << std::endl;
    this->fixed_num = other.getRawBits();
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
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

bool    Fixed::operator<(const Fixed& fixed_obj) const
{
    float   this_num = (float)this->getRawBits() / (1 << 8);
    float   arg_num = (float)fixed_obj.getRawBits() / (1 << 8);
    
    if (this_num < arg_num)
        return (true);
    else
        return (false);
}

bool    Fixed::operator>(const Fixed& fixed_obj) const
{
    float   this_num = (float)this->getRawBits() / (1 << 8);
    float   arg_num = (float)fixed_obj.getRawBits() / (1 << 8);
    
    if (this_num > arg_num)
        return (true);
    else
        return (false);
}

bool    Fixed::operator<=(const Fixed& fixed_obj) const
{
    float   this_num = (float)this->getRawBits() / (1 << 8);
    float   arg_num = (float)fixed_obj.getRawBits() / (1 << 8);
    
    if (this_num <= arg_num)
        return (true);
    else
        return (false);
}

bool    Fixed::operator>=(const Fixed& fixed_obj) const
{
    float   this_num = (float)this->getRawBits() / (1 << 8);
    float   arg_num = (float)fixed_obj.getRawBits() / (1 << 8);
    
    if (this_num >= arg_num)
        return (true);
    else
        return (false);
}

bool    Fixed::operator==(const Fixed& fixed_obj) const
{
    float   this_num = (float)this->getRawBits() / (1 << 8);
    float   arg_num = (float)fixed_obj.getRawBits() / (1 << 8);
    
    if (this_num == arg_num)
        return (true);
    else
        return (false);
}

bool    Fixed::operator!=(const Fixed& fixed_obj) const
{
    float   this_num = (float)this->getRawBits() / (1 << 8);
    float   arg_num = (float)fixed_obj.getRawBits() / (1 << 8);
    
    if (this_num != arg_num)
        return (true);
    else
        return (false);
}

float   Fixed::operator+(const Fixed& fixed_obj) const
{
    float   this_num = (float)this->getRawBits() / (1 << 8);
    float   arg_num = (float)fixed_obj.getRawBits() / (1 << 8);
    
    return (this_num + arg_num);
}

float   Fixed::operator-(const Fixed& fixed_obj) const
{
    float   this_num = (float)this->getRawBits() / (1 << 8);
    float   arg_num = (float)fixed_obj.getRawBits() / (1 << 8);
    
    return (this_num - arg_num);
}

float   Fixed::operator*(const Fixed& fixed_obj) const
{
    float   this_num = (float)this->getRawBits() / (1 << 8);
    float   arg_num = (float)fixed_obj.getRawBits() / (1 << 8);
    
    return (this_num * arg_num);
}

float   Fixed::operator/(const Fixed& fixed_obj) const
{
    float   this_num = (float)this->getRawBits() / (1 << 8);
    float   arg_num = (float)fixed_obj.getRawBits() / (1 << 8);
    
    return (this_num / arg_num);
}

float   Fixed::operator++(void)
{
    this->fixed_num += 1;
    return (this->toFloat());
}

float  Fixed::operator++(int)
{
    float   num;

    num = this->toFloat();
    this->fixed_num += 1;
    return (num);
}

float   Fixed::operator--(void)
{
    this->fixed_num -= 1;
    return (this->toFloat());
}

float   Fixed::operator--(int)
{
    float   num;
    
    num = this->toFloat();
    this->fixed_num -= 1;
    return (num);
}

Fixed&	Fixed::min(Fixed& obj1, Fixed& obj2)
{
    if (obj1.toFloat() < obj2.toFloat())
        return (obj1);
    else
        return (obj2);
}

const Fixed&	Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
    if (obj1.toFloat() < obj2.toFloat())
        return (obj1);
    else
        return (obj2);
}

Fixed&	Fixed::max(Fixed& obj1, Fixed& obj2)
{
    if (obj1.toFloat() > obj2.toFloat())
        return (obj1);
    else
        return (obj2);
}

const Fixed&	Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
    if (obj1.toFloat() > obj2.toFloat())
        return (obj1);
    else
        return (obj2);
}
