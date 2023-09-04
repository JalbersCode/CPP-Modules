/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:57:42 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/27 19:39:26 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int grade1, int grade2)
    : _name(name), _is_signed(false)
{
    if (grade1 < 1 || grade2 < 1)
    {
        std::cout << "Cannot create Form. ";
        throw(AForm::GradeTooHighException());
    }
    if (grade1 > 150 || grade2 > 150)
    {
        std::cout << "Cannot create Form. ";
        throw(AForm::GradeTooLowException());
    }
    this->_grade_for_signing = grade1;
    this->_grade_for_executing = grade2;
}

AForm::AForm(const AForm &other)
{
    (void)other;
}

AForm &AForm::operator=(const AForm &other)
{
    if (this != &other)
    {
    }
    return (*this);
}

AForm::~AForm()
{
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    int grade = bureaucrat.getGrade();

    if (grade <= this->getGradeForSigning())
        this->_is_signed = true;
    else
    {
        std::cout << "Cannot sign Form. ";
        throw(AForm::GradeTooLowException());
    }
}

void AForm::execute(Bureaucrat const &executor) const
{
    if (!this->_is_signed)
    {
        std::cout << "Cannot execute Form. ";
        throw(AForm::FormNotSigned());
    }
    else if (executor.getGrade() > this->getGradeForExecution())
    {
        std::cout << "Cannot execute Form. ";
        throw(AForm::GradeTooLowException());
    }
    else
        this->performAction();
}

const std::string &AForm::getName() const
{
    return (this->_name);
}

const bool &AForm::getIsSigned() const
{
    return (this->_is_signed);
}

const int &AForm::getGradeForSigning() const
{
    return (this->_grade_for_signing);
}

const int &AForm::getGradeForExecution() const
{
    return (this->_grade_for_executing);
}

std::ostream &operator<<(std::ostream &os, const AForm &obj)
{
    // os << "FORM INFO. Name: " << obj.getName() << " Is_Signed: " << obj.getIsSigned() << " gradeSinging: " << obj.getGradeForSigning() << " gradeExecuting: " << obj.getGradeForExecution();
    os << "FORM INFO. Name: " << obj.getName() << " Is_Signed: " << obj.getIsSigned() << " gradeSinging: " << obj.getGradeForSigning() << " gradeExecuting: " << obj.getGradeForExecution();
    return os;
}
