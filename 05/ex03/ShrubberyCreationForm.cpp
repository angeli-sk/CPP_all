/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 08:23:03 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/12 18:03:21 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("shrubbery creation form", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy)
	: Form(copy)
{
	*this = copy;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator =
	(ShrubberyCreationForm const & copy)
{
	(void)copy;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor)
	const
{
	if (executor.getGrade() > this->getGradeExe())
		throw Form::GradeTooLowException();
	if (this->getSigned() == false)
		throw Form::FormNotSigned();
	std::ofstream of(this->getTarget() + "_shrubbery");

	of << "   *    *  ()   *   *\n\
*        * /\\         *\n\
      *   /i\\\\    *  *\n\
    *     o/\\\\  *      *\n\
 *       ///\\i\\    *\n\
     *   /*/o\\\\  *    *\n\
   *    /i//\\*\\      *\n\
        /o/*\\\\i\\   *\n\
  *    //i//o\\\\\\\\     *\n\
    * /*////\\\\\\\\i\\*\n\
 *    //o//i\\\\*\\\\\\   *\n\
   * /i///*/\\\\\\\\\\o\\   *\n\
  *    *   ||     *" << std::endl;

	of.close();
}
