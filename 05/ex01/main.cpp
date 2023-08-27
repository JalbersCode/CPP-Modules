/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 23:18:58 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/27 19:42:02 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main(void)
{
    try
    {
        Bureaucrat bob = Bureaucrat("Bob", 11);
        bob.incrementGrade();
        bob.decrementGrade();
        // bob.decrementGrade();
        std::cout << bob << std::endl;
        
        Form form = Form("Liscence", 149, 100);
        std::cout << form << std::endl;
        
        bob.signForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}