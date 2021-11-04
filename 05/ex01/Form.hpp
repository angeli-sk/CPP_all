/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/11 10:12:23 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/11 17:01:37 by akramp        ########   odam.nl         */
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
		Form();
	public:
		Form(std::string const name, int const _grade_sign,
			int _grade_exe);
		Form(Form const & copy);
		Form & operator = (Form const & copy);
		~Form();
		void beSigned(Bureaucrat *obj);
		std::string	getName() const;
		bool	getSigned() const;
		int		getGradeSign() const;
		int		getGradeExe() const;

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
};

std::ostream & operator << (std::ostream &out, Form &obj);

#endif
