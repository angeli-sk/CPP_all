/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 17:37:09 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/17 22:46:53 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fpv = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int fix)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fpv = fix * (1 << this->nfb);
}

Fixed::Fixed(const float fix)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fpv = roundf(fix * (1 << this->nfb));
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_fpv / (1 << this->nfb));
}

int Fixed::toInt( void ) const
{
	return (this->_fpv / (1 << this->nfb));
}

std::ostream& operator << (std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

Fixed& Fixed::operator = (const Fixed &obj)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fpv = obj._fpv;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fpv);
}

void Fixed::setRawBits( int const raw )
{
	this->_fpv = raw;
}
