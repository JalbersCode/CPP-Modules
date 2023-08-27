/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:57:42 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/27 19:39:26 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int grade1, int grade2)
    : _name(name), _is_signed(false)
{
    if (grade1 < 1 || grade2 < 1)
        throw(Form::GradeTooHighException());
    if (grade1 > 150 || grade2 > 150)
        throw(Form::GradeTooLowException());
    this->_grade_for_signing = grade1;
    this->_grade_for_executing = grade2;
}

Form::Form(const Form &other)
{
    (void)other;
}

Form &Form::operator=(const Form &other)
{
    if (this != &other)
    {
    }
    return (*this);
}

Form::~Form()
{
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    int grade = bureaucrat.getGrade();

    if (grade <= this->getGradeForSigning())
        this->_is_signed = true;
    else
        throw(Form::GradeTooLowException());
}

const std::string &Form::getName() const
{
    return (this->_name);
}

const bool &Form::getIsSigned() const
{
    return (this->_is_signed);
}

const int &Form::getGradeForSigning() const
{
    return (this->_grade_for_signing);
}

const int &Form::getGradeForExecution() const
{
    return (this->_grade_for_executing);
}

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
    // os << "FORM INFO. Name: " << obj.getName() << " Is_Signed: " << obj.getIsSigned() << " gradeSinging: " << obj.getGradeForSigning() << " gradeExecuting: " << obj.getGradeForExecution();
    os << "FORM INFO. Name: " << obj.getName() << " Is_Signed: " << obj.getIsSigned() << " gradeSinging: " << obj.getGradeForSigning() << " gradeExecuting: " << obj.getGradeForExecution();
    return os;
}
