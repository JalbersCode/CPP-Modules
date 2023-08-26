/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 23:21:17 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/27 00:24:36 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, const int &grade)
    : _name(name)
{
    if (grade < 1)
        throw(Bureaucrat::GradeTooLowException());
    if (grade > 150)
        throw(Bureaucrat::GradeTooHighException());
    else
        this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    (void)other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
    }
    return (*this);
}

const std::string &Bureaucrat::getName() const
{
    return (this->_name);
}

const int &Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade == 1)
        throw(Bureaucrat::GradeTooLowException());
    this->_grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade == 150)
        throw(Bureaucrat::GradeTooHighException());
    this->_grade++;
}