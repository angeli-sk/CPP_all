/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   except.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 14:10:00 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/17 16:26:27 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "except.hpp"


NanException::NanException(){}

NanException::~NanException() throw(){}

const char* NanException::what() const throw()
{
    return ( "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan");
}

IntException::IntException(){}

IntException::~IntException() throw(){}

const char* IntException::what() const throw()
{
    return ("int: impossible");
}

FloatTooLowException::FloatTooLowException(){}

FloatTooLowException::~FloatTooLowException() throw(){}

const char* FloatTooLowException::what() const throw()
{
    return ("float: -inff");
}

FloatTooHighException::FloatTooHighException(){}

FloatTooHighException::~FloatTooHighException() throw(){}

const char* FloatTooHighException::what() const throw()
{
    return ("float: +inff");
}

DoubleTooLowException::DoubleTooLowException(){}

DoubleTooLowException::~DoubleTooLowException() throw(){}

const char* DoubleTooLowException::what() const throw()
{
    return ("double: -inf");
}

DoubleTooHighException::DoubleTooHighException(){}

DoubleTooHighException::~DoubleTooHighException() throw(){}

const char* DoubleTooHighException::what() const throw()
{
    return ("double: +inf");
}

CharException::CharException(){}

CharException::~CharException() throw(){}

const char* CharException::what() const throw()
{
    return ("char: impossible");
}
