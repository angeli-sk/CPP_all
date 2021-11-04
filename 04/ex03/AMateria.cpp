/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 08:18:25 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/15 20:09:53 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <string>

AMateria::AMateria(std::string const & type) : _type(type),_xp(0){}

AMateria::AMateria (AMateria const & copy)
{
	*this = copy;
}

AMateria & AMateria::operator = (AMateria const & copy)
{
	this->_xp = copy._xp;
	return *this;
}

AMateria::~AMateria(){}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}
