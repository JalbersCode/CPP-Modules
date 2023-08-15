/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephalbers <josephalbers@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:16:57 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/13 14:33:05 by josephalber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
    Point a(150, 35.123);
    Point b(23.234, 40);
    Point c(0, 0);
    Point d(51, 12);
    
    if (bsp(a, b, c, d))
        std::cout << "Point is inside the Triangle" << std::endl;
    else
        std::cout << "Point is outside the Trinagle" << std::endl;
}