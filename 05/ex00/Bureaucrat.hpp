/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 11:14:11 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/11 14:51:26 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include <string>

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;
		Bureaucrat();
	public:
		Bureaucrat (std::string const & name, int grade);
		Bureaucrat(Bureaucrat const & copy);
		Bureaucrat & operator = (Bureaucrat const & copy);
		virtual ~Bureaucrat();
		void	incrementGrade();
		void	decrementGrade();
		std::string getName() const;
		int getGrade() const;
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

std::ostream & operator << (std::ostream &out, Bureaucrat &obj);

#endif
