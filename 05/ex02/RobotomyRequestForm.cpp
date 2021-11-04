/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 08:23:00 by akramp        #+#    #+#                 */
/*   Updated: 2020/11/02 16:01:30 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("Robotomy Request Form", 72, 45, target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy)
	: Form(copy)
{
	*this = copy;
}

RobotomyRequestForm & RobotomyRequestForm::operator =
	(RobotomyRequestForm const & copy)
{
	(void)copy;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int i = rand() % 2;
	if (executor.getGrade() > this->getGradeExe())
		throw Form::GradeTooLowException();
	if (this->getSigned() == false)
		throw Form::FormNotSigned();
	if (i == 0)
		std::cout << "*uwu* " << this->getTarget()
			<< " has been rebotomized succesfully!" << std::endl;
	else
		std::cout << "*uwu* " << this->getTarget()
			<< " has been rebotomized unsuccesfully." << std::endl;
}
