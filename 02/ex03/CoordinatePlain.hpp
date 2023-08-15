/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CoordinatePlain.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 01:25:47 by josephalber       #+#    #+#             */
/*   Updated: 2023/08/13 13:55:45 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COORDINATE_PLAIN_HPP
#define COORDINATE_PLAIN_HPP

#include "Line.hpp"

class CoordinatePlain
{
    private:
        Point const a;
        Point const b;
        Point const c;
        Point const point;
        Line        line_ab;
        Line        line_bc;
        Line        line_ca;
        Fixed       max_y;
        Fixed       min_y;
        Fixed       max_x;
        Fixed       min_x;

    public:
        CoordinatePlain(const Point& a, const Point& b, const Point& c, const Point& point);
        ~CoordinatePlain();
        void    draw(int padding);
        bool    is_inside_triangle(const Fixed& x, const Fixed& y);
        void    write_coordinate(int y, int x);

};
#endif