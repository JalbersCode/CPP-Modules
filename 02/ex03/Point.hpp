/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 23:50:03 by josephalber       #+#    #+#             */
/*   Updated: 2023/08/12 00:45:48 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;

    public:
        Point();
        Point(const float f1, const float f2);
        Point(const Point& obj);
        Point&  operator=(const Point& other);
        ~Point();
        const Fixed&    get_x(void) const;
        const Fixed&    get_y(void) const;

};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif