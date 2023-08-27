/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 23:18:58 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/27 21:13:14 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat bob = Bureaucrat("Bob", 5);
        bob.incrementGrade();
        bob.decrementGrade();
        // bob.decrementGrade();
        std::cout << bob << std::endl;

        // Not allowed becuase abstract
        // AForm aform = AForm("Liscence", 149, 100);
        
        PresidentialPardonForm pardonForm = PresidentialPardonForm("Target");        
        bob.signAForm(pardonForm);
        pardonForm.execute(bob);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}