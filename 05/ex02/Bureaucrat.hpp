/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 23:21:49 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/27 20:49:34 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
class Bureaucrat;

#include "AForm.hpp"

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;

public:
    Bureaucrat(const std::string &name, const int &grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator=(const Bureaucrat &other);
    ~Bureaucrat();
    void signAForm(AForm &form) const;
    const std::string &getName() const;
    const int &getGrade() const;
    void incrementGrade();
    void decrementGrade();
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

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif