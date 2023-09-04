/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:57:42 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/27 19:39:26 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("Shrubbery Creation Form", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
    : AForm(other.getName(), 145, 137), _target(other.getTarget())
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::performAction() const
{
    std::ofstream outputFile((this->_target + "_shrubbery").c_str());

    if (outputFile.is_open()) {
        outputFile << "  ccee88oo\n"
                   << " C8O8O8Q8PoOb o8oo\n"
                   << "dOB69QO8PdUOpugoO9bD\n"
                   << "CgggbU8OU qOp qOdoUOdcb\n"
                   << "  6OuU  /p u gcoUodpP\n"
                   << "    \\\\\\//  /douUP\n"
                   << "      \\\\\\////\n"
                   << "       |||/\\ \n"
                   << "       |||\\/ \n"
                   << "       |||||  \n"
                   << "       |||||  \n"
                   << "       |||||  \n"
                   << "       |||||  \n"
                   << "       |||||   \n"
                   << "  .....//||||\\....";
        outputFile.close();
        std::cout << "Shrubbery file created: " << this->_target << "_shrubbery" << std::endl;
    } else {
        std::cerr << "Unable to create shrubbery file." << std::endl;
    }
}

const std::string& ShrubberyCreationForm::getTarget(void) const
{
    return (this->_target);
}