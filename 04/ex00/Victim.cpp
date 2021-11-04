/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 07:52:38 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/01 20:37:21 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>
#include "enum.hpp"

Victim::Victim()
{
	std::cout << "DO NOT USE" << std::endl;
}

Victim::Victim(std::string const & name) :	_name(name)
{
	std::cout << "Some random victim called " << this->_name
		<< " just appeared!" << std::endl;
}

Victim::Victim(Victim const & copy)
{
	*this = copy;
}

Victim & Victim::operator = (Victim const & copy)
{
	this->_name = copy._name;
	return *this;
}

std::ostream & operator << (std::ostream &out, const Victim &obj)
{
	out << "I'm " << obj.get_name() << " and I like otters!" << std::endl;
	return (out);
}

Victim::~Victim()
{
	std::cout  << "Victim " << this->_name
		<< " just died for no apparent reason!" << std::endl;
}

std::string Victim::get_name() const
{
	return(this->_name);
}

void	Victim::getPolymorphed() const
{
	std::cout  << this->_name << " has been turned into a cute little sheep!"
		<< std::endl;
}