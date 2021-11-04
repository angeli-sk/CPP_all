/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/11 10:12:18 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/12 13:58:29 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const name, int const grade_sign, int grade_exe,
	std::string target) : _name(name), _signed(false), _grade_sign(grade_sign),
	_grade_exe(grade_exe), 	_target(target)
{
	if (this->_grade_sign > 150 || this->_grade_exe > 150)
        throw Form::GradeTooLowException();
    if(this->_grade_sign < 1 || this->_grade_exe < 1)
        throw Form::GradeTooHighException();
}

Form::Form(Form const & copy) : _name(copy.getName()),
	_signed(copy.getSigned()), _grade_sign(copy.getGradeSign()),
	_grade_exe(copy.getGradeExe()){}

Form & Form::operator = (Form const & copy)
{
	this->_signed = copy._signed;
	return *this;
}

Form::~Form(){}

void Form::beSigned(Bureaucrat *obj)
{
	if (obj->getGrade() <= this->_grade_sign)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

int		Form::getGradeSign() const
{
	return (this->_grade_sign);
}

int		Form::getGradeExe() const
{
	return (this->_grade_exe);
}

std::string		Form::getTarget() const
{
	return (this->_target);
}

Form::GradeTooLowException::GradeTooLowException(){}

Form::GradeTooLowException::~GradeTooLowException() throw(){}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low :00");
}

Form::GradeTooHighException::GradeTooHighException(){}

Form::GradeTooHighException::~GradeTooHighException() throw(){}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high :((");
}

Form::FormNotSigned::FormNotSigned(){}

Form::FormNotSigned::~FormNotSigned() throw(){}

const char* Form::FormNotSigned::what() const throw()
{
    return ("Form not signed :PP");
}

std::ostream & operator << (std::ostream &out, Form &obj)
{
	if (obj.getSigned() == true)
		out << "The " << obj.getName() << " form with " << obj.getGradeSign()
			<< " as grade to sign, " << obj.getGradeExe() << " as the target, " <<
			obj.getTarget() << " & as grade to execute and the form is signed!";
	else
		out << "The " << obj.getName() << " form with " << obj.getGradeSign()
			<< " as grade to sign, " << obj.getGradeExe() << " as the target, " <<
			obj.getTarget() << " & as grade to execute and the form is not signed.";
	return (out);
}
