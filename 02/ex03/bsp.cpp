/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 00:22:38 by josephalber       #+#    #+#             */
/*   Updated: 2023/08/13 14:30:26 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CoordinatePlain.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    CoordinatePlain graph(a, b, c, point);
    graph.draw(5);
    return(graph.is_inside_triangle(point.get_y(), point.get_x())); 
}

