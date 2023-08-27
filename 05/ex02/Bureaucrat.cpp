/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 23:21:17 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/27 20:49:17 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, const int &grade)
    : _name(name)
{
    if (grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    if (grade > 150)
        throw(Bureaucrat::GradeTooLowException());
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

void Bureaucrat::signAForm(AForm &form) const
{
    form.beSigned(*this);
    if (form.getIsSigned())
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    else
        std::cout << this->_name << " could not sign form: " << form.getName() << std::endl;
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
        throw(Bureaucrat::GradeTooHighException());
    this->_grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade == 150)
        throw(Bureaucrat::GradeTooLowException());
    this->_grade++;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    // (void)obj;
    // os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return os;
}