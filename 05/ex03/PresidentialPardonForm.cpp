/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 08:22:49 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/12 18:03:29 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form("presidential creation form", 25, 5, target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy)
	: Form(copy)
{
	*this = copy;
}

PresidentialPardonForm & PresidentialPardonForm::operator =
	(PresidentialPardonForm const & copy)
{
	(void)copy;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void	PresidentialPardonForm::execute(Bureaucrat const & executor)
	const
{
	if (executor.getGrade() > this->getGradeExe())
		throw Form::GradeTooLowException();
	if (this->getSigned() == false)
		throw Form::FormNotSigned();
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox."
		<< std::endl;
}
