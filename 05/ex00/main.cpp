/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 23:18:58 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/27 17:40:40 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int	main(void)
{
    try
    {
        Bureaucrat obj = Bureaucrat("Bob", 150);
        obj.incrementGrade();
        obj.decrementGrade();
        // obj.decrementGrade();
        std::cout << obj << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}