/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 11:14:13 by akramp        #+#    #+#                 */
/*   Updated: 2020/11/02 15:30:06 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
# include "Form.hpp"
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

void    Bureaucrat::signForm(Form *obj)
{
    try
    {
        obj->beSigned(this);
        std::cout << this->_name << " signs " << obj->getName() << std::endl;
    }
    catch(Form::GradeTooLowException const & e)
    {
        std::cout <<  this->_name << " cannot sign " << obj->getName()
            << " because his grade is too low." << std::endl;
    }
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void	Bureaucrat::executeForm(Form const & form)
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executes " << form.getName() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
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