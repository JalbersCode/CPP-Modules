/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:38:06 by jalbers           #+#    #+#             */
/*   Updated: 2023/09/04 18:15:21 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

AForm *makeShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm *makeRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm *makePresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    typedef AForm *(*funcPtr)(std::string target);
    
    std::string formNames[3] = {
        "Presidential Pardon Form",
        "Robotomy Request Form",
        "Shrubbery Creation Form"};

    funcPtr funcArray[3] = {
        &makeShrubberyCreationForm,
        &makeRobotomyRequestForm,
        &makePresidentialPardonForm};

    for (int i = 0; i < 3; i++)
    {
        if (formNames[i] == formName)
        {
            std::cout << "Intern creates " << formName << std::endl;
            return ((funcArray[i])(target));
        }
    }
    std::cout << "Failed to create form: Form does not exist.\n";
    return (NULL);
}