/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 16:56:13 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/12 18:44:31 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <string>

Intern::Intern(){}

Intern::Intern(Intern const & copy)
{
	*this = copy;
}

Intern & Intern::operator = (Intern const & copy)
{
	(void)copy;
	return *this;
}

Intern::~Intern(){}

Form	*Intern::makeForm(std::string form_name, std::string target_name)
{
	Form *ret;
	Form *array[3];
	int index;

	array[0] = new ShrubberyCreationForm(target_name);
	array[1] = new PresidentialPardonForm(target_name);
	array[2] = new RobotomyRequestForm(target_name);
	ret = NULL;
	for (index = 0; index < 3; index++)
	{
		if (array[index]->getName() == form_name)
		{
			ret = array[index];
			break;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (i != index)
			delete array[i];
	}
	if (index == 3)
		throw Intern::InvalidInputException();
	std::cout << "Intern creates " << form_name << std::endl;
	return (ret);
}

Intern::InvalidInputException::InvalidInputException(){}

Intern::InvalidInputException::~InvalidInputException() throw(){}

const char* Intern::InvalidInputException::what() const throw()
{
    return ("Input wrong yo x0");
}


