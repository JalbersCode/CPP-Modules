/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 23:18:58 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/28 14:58:36 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

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
                
        bob.signAForm(pardonForm);
        bob.executeForm(pardonForm);

        bob.signAForm(shrubberyForm);
        bob.executeForm(shrubberyForm);
        // pardonForm.execute(bob);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}