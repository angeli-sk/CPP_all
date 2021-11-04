/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 11:14:13 by akramp        #+#    #+#                 */
/*   Updated: 2020/11/02 15:28:47 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name),
    _grade(grade)
{
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if(this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy)
{
    *this = copy;
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const & copy)
{
    this->_grade = copy.getGrade();
    return *this;
}

std::ostream & operator << (std::ostream &out, Bureaucrat &obj)
{
	out << obj.getName() << " bureaucrat grade " << obj.getGrade();
	return (out);
}

Bureaucrat::~Bureaucrat(){}

void    Bureaucrat::incrementGrade()
{
    if(this->_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade -= 1;
}


void    Bureaucrat::decrementGrade()
{
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade += 1;
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

Bureaucrat::GradeTooLowException::GradeTooLowException(){}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low :00");
}

Bureaucrat::GradeTooHighException::GradeTooHighException(){}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high :((");
}
