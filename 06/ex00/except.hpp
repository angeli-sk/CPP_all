/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   except.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 14:10:02 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/17 16:25:44 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPT_HPP
# define EXCEPT_HPP
#include <exception>


class IntException : public std::exception
{
	public:
		IntException();
		virtual ~IntException() throw();
		virtual const char* what() const throw();
};

class FloatTooHighException : public std::exception
{
	public:
		FloatTooHighException();
		virtual ~FloatTooHighException() throw();
		virtual const char* what() const throw();
};

class FloatTooLowException : public std::exception
{
	public:
		FloatTooLowException();
		virtual ~FloatTooLowException() throw();
		virtual const char* what() const throw();
};

class DoubleTooHighException : public std::exception
{
	public:
		DoubleTooHighException();
		virtual ~DoubleTooHighException() throw();
		virtual const char* what() const throw();
};

class DoubleTooLowException : public std::exception
{
	public:
		DoubleTooLowException();
		virtual ~DoubleTooLowException() throw();
		virtual const char* what() const throw();
};

class CharException : public std::exception
{
	public:
		CharException();
		virtual ~CharException() throw();
		virtual const char* what() const throw();
};

class NanException : public std::exception
{
	public:
		NanException();
		virtual ~NanException() throw();
		virtual const char* what() const throw();
};

#endif
