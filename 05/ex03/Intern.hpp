/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 16:56:09 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/12 18:09:16 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>

class Form;

class Intern
{
	public:
		Intern();
		Intern(Intern const & copy);
		Intern & operator = (Intern const & copy);
		~Intern();
		class InvalidInputException : public std::exception
		{
			public:
				InvalidInputException();
				virtual ~InvalidInputException() throw();
				virtual const char* what() const throw();
		};
		Form	*makeForm(std::string form_name, std::string target_name);
};

#endif
