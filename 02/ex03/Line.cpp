/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Line.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:47:23 by josephalber       #+#    #+#             */
/*   Updated: 2023/08/13 13:51:59 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Line.hpp"

Line::Line(const Point& start, const Point& end)
    : start(start), end(end)
{
    this->gradient = (start.get_y() - end.get_y()) / (start.get_x() - end.get_x());
}

Line::~Line()
{
}

const Point&  Line::get_start(void) const
{
    return (this->start);
}

const Point& Line::get_end(void) const
{
    return (this->end);
}

const Fixed&  Line::get_gradient(void) const
{
    return (this->gradient);
}