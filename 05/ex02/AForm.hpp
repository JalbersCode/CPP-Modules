/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:53:44 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/27 19:18:04 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

// #include <iostream>
class AForm;
#include "Bureaucrat.hpp"

class AForm
{
private:
    const std::string _name;
    bool _is_signed;
    int _grade_for_signing;
    int _grade_for_executing;

protected:
    AForm(std::string name, int grade1, int grade2);
    AForm(const AForm &other);
    AForm &operator=(const AForm &other);

public:
    ~AForm();
    virtual void performAction() const = 0;
    void beSigned(const Bureaucrat &bureaucrat);
    void execute(Bureaucrat const &executor) const;
    const std::string &getName() const;
    const bool &getIsSigned() const;
    const int &getGradeForSigning() const;
    const int &getGradeForExecution() const;
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw() { return ("Grade too low"); };
    };
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw() { return ("Grade too high"); };
    };
    class FormNotSigned : public std::exception
    {
    public:
        const char *what() const throw() { return ("Form not signed"); };
    };
};

std::ostream &operator<<(std::ostream &os, const AForm &obj);

#endif