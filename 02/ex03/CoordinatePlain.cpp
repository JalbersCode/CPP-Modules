/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CoordinatePlain.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 01:33:03 by josephalber       #+#    #+#             */
/*   Updated: 2023/08/15 16:13:17 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CoordinatePlain.hpp"

CoordinatePlain::CoordinatePlain(const Point& a, const Point& b, const Point& c, const Point& point)
    : a(a), b(b), c(c), point(point), line_ab(a, b), line_bc(b, c), line_ca(c, a)
{
    this->max_y = Fixed::max(a.get_y(), Fixed::max(b.get_y(), c.get_y()));
    this->min_y = Fixed::min(a.get_y(), Fixed::min(b.get_y(), c.get_y()));
    this->max_x = Fixed::max(a.get_x(), Fixed::max(b.get_x(), c.get_x()));
    this->min_x = Fixed::min(a.get_x(), Fixed::min(b.get_x(), c.get_x()));
}

CoordinatePlain::~CoordinatePlain()
{
}

bool    point_within_x_range(Line& line, const Fixed& x)
{
    Fixed   start_x = line.get_start().get_x();
    Fixed   end_x = line.get_end().get_x();

    if (x >= start_x && x <= end_x)
        return (true);
    else if (x <= start_x && x >= end_x)
        return (true);
    else
        return (false);
}

bool    point_above_line(Line& line, const Fixed& y, const Fixed& x)
{
    Fixed   start_x = line.get_start().get_x();
    Fixed   start_y = line.get_start().get_y();
    Fixed   gradient = line.get_gradient();
    
    if (y > (start_y + (gradient * (x - start_x))))
        return (true);
    return (false);
}

bool    point_between_lines(Line& line1, Line& line2, const Fixed& y, const Fixed& x)
{
    if (!point_within_x_range(line1, x) || !point_within_x_range(line2, x))
        return (false);
    if (point_above_line(line1, y, x) && !point_above_line(line2, y, x))
        return (true); 
    if (!point_above_line(line1, y, x) && point_above_line(line2, y, x))
        return (true); 
    return (false);
}

bool    CoordinatePlain::is_inside_triangle(const Fixed& y, const Fixed& x)
{
    if (point_between_lines(line_ab, line_bc, y, x))
        return (true);
    else if (point_between_lines(line_bc, line_ca, y, x))
        return (true);
    else if (point_between_lines(line_ca, line_ab, y, x))
        return (true);
    return (false);  
}

void    CoordinatePlain::write_coordinate(int y, int x)
{
    if (y == a.get_y().toInt() && x == a.get_x().toInt())
        std::cout << "\033[1m\033[33mA\033[0m";  
    else if (y == b.get_y().toInt() && x == b.get_x().toInt())
        std::cout << "\033[1m\033[33mB\033[0m";  
    else if (y == c.get_y().toInt() && x == c.get_x().toInt())
        std::cout << "\033[1m\033[33mC\033[0m";  
    else if (y == point.get_y().toInt() && x == point.get_x().toInt())
        std::cout << "\033[1m\033[34mX\033[0m";
    else if (this->is_inside_triangle(Fixed(y), Fixed(x)))
        std::cout << "\033[1m\033[32mO\033[0m";
    else
        std::cout << "\033[2m\033[31mO\033[0m";
}

void    CoordinatePlain::draw(int padding)
{
    int     y;
    int     x;
    
    y = this->max_y + padding;
    while (y >= this->min_y - padding)
    {
        x = this->min_x - padding; 
        while (x <= this->max_x + padding)
        {
            this->write_coordinate(y, x); 
            x++;    
        }
        std::cout << std::endl;    
        y--;  
    }
}