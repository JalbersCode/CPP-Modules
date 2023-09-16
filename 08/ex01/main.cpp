/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Jalbers42                                         #+#    #+#             */
/*   https://github.com/Jalbers42                     ###   ###########       */
/*                                                                            */
/******************************************************************************/

#include "Span.hpp"
#include <ctime>

int	main(void)
{
    Span span = Span(100000);

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    for (unsigned int i = 0; i < 100000; i++)
        span.addNumber(std::rand());
        
    // span.printList();
    std::cout << "Shortest span: " << span.shortestSpan() << " Longest span: " << span.longestSpan() << std::endl;

    // Span sp = Span(5);
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    // // sp.printList();
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
    return (0);
}