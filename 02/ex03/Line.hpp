/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Line.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:45:33 by josephalber       #+#    #+#             */
/*   Updated: 2023/08/13 13:50:35 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINES_HPP
#define LINES_HPP

#include "Point.hpp"

class   Line 
{
    private:
        const Point&   start;
        const Point&   end;
        Fixed           gradient;

    public:
        Line(const Point& start, const Point& end);
        ~Line();
        const Point&  get_start(void) const;
        const Point&  get_end(void) const;
        const Fixed&  get_gradient(void) const;

};
#endif