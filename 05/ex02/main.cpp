/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 23:18:58 by jalbers           #+#    #+#             */
/*   Updated: 2023/09/04 16:08:52 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat bob = Bureaucrat("Bob", 2);
        bob.incrementGrade();
        bob.decrementGrade();
        // bob.decrementGrade();
        std::cout << bob << std::endl;

        // Not allowed becuase abstract
        // AForm aform = AForm("Liscence", 149, 100);
        
        PresidentialPardonForm pardonForm = PresidentialPardonForm("Target");        
        ShrubberyCreationForm shrubberyForm = ShrubberyCreationForm("Target");
        RobotomyRequestForm robotomyRequestForm = RobotomyRequestForm("Target");
                
        bob.signAForm(pardonForm);
        bob.executeForm(pardonForm);

        bob.signAForm(shrubberyForm);
        bob.executeForm(shrubberyForm);
        
        bob.signAForm(robotomyRequestForm);
        bob.executeForm(robotomyRequestForm);
        robotomyRequestForm.execute(bob);
        // pardonForm.execute(bob);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}