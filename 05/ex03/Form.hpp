/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/11 10:12:23 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/12 13:18:54 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string.h>
# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const 	 _name;
		bool				_signed;
		int	const 		_grade_sign;
		int	const 		_grade_exe;
		std::string	const _target;
		Form();
	public:
		Form(std::string const name, int const grade_sign,
			int grade_exe, std::string target);
		Form(Form const & copy);
		Form & operator = (Form const & copy);
		virtual ~Form();
		void beSigned(Bureaucrat *obj);
		std::string	getName() const;
		bool	getSigned() const;
		int		getGradeSign() const;
		int		getGradeExe() const;
		std::string getTarget() const;
		virtual void	execute(Bureaucrat const & executor) const = 0;

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException();
				virtual ~GradeTooLowException() throw();
				virtual const char* what() const throw();
		};

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
				virtual ~GradeTooHighException() throw();
				virtual const char* what() const throw();
		};

		class FormNotSigned : public std::exception
		{
			public:
				FormNotSigned();
				virtual ~FormNotSigned() throw();
				virtual const char* what() const throw();
		};
};

std::ostream & operator << (std::ostream &out, Form &obj);

#endif
