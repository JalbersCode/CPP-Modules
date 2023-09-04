/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 23:18:58 by jalbers           #+#    #+#             */
/*   Updated: 2023/09/04 17:57:54 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
    try
    {
        Bureaucrat bob = Bureaucrat("Bob", 2);
        std::cout << bob << std::endl;

        // Intern
        Intern intern = Intern();        

        AForm* form = intern.makeForm("Presidential Pardon Form", "Target");

        bob.signAForm(*form);
        bob.executeForm(*form);
        delete (form);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}