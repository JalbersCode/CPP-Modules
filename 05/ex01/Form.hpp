/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:53:44 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/27 19:18:04 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP


// #include <iostream>
class Form;
#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string _name;
    bool _is_signed;
    int _grade_for_signing;
    int _grade_for_executing;

public:
    Form(std::string name, int grade1, int grade2);
    Form(const Form &other);
    Form &operator=(const Form &other);
    ~Form();
    void beSigned(const Bureaucrat &bureaucrat);
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
};

std::ostream &operator<<(std::ostream &os, const Form &obj);

#endif