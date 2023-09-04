/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:57:42 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/27 19:39:26 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm("Robotomy Request Form", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : AForm(other.getName(), 72, 45), _target(other.getTarget())
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
    {
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::performAction() const
{
    std::cout << "Drrrr drrrr drr\n";
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    int randomValue = std::rand();
    if (randomValue % 2 == 0)
        std::cout << this->_target << " has been robotomized.\n";
    else
        std::cout << "Robotomy failed.\n";
}

const std::string& RobotomyRequestForm::getTarget(void) const
{
    return (this->_target);
}