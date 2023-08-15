/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 23:52:00 by josephalber       #+#    #+#             */
/*   Updated: 2023/08/12 00:41:28 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
    : x(0), y(0)
{
}

Point::Point(const float f1, const float f2)
    : x(f1), y(f2)
{
}

Point::Point(const Point& obj)
    : x(obj.x), y(obj.y)
{
    // this->x = obj.x;
    // this->y = obj.y;
}

Point&  Point::operator=(const Point& other)
{
    if (this != &other)
    {
        (Fixed)this->x = other.x;
        (Fixed)this->y = other.y;
    }
    return (*this);
}

Point::~Point()
{
}

const Fixed& Point::get_x(void) const
{
    return (this->x);    

}
const Fixed& Point::get_y(void) const
{
    return (this->y);
}