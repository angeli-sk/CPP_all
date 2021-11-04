/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 07:52:33 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/01 15:36:59 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>
#include "enum.hpp"

Sorcerer::Sorcerer()
{
	std::cout << "DO NOT USE" << std::endl;
}

Sorcerer::Sorcerer(std::string const & name, std::string const & title) :
	_name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!"
		<< std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & copy)
{
	*this = copy;
}

Sorcerer & Sorcerer::operator = (Sorcerer const & copy)
{
	this->_name = copy._name;
	this->_title = copy._title;
	return *this;
}

std::ostream & operator << (std::ostream &out, const Sorcerer &obj)
{
	out << "I am " << obj.get(NAME) << ", " << obj.get(TITLE) <<
		" and I like ponies!" << std::endl;
	return (out);
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead."
	" Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::get(int i) const
{
	if(i == NAME)
		return(this->_name);
	else
		return(this->_title);
}

void Sorcerer::polymorph(Victim const & vic) const
{
	vic.getPolymorphed();
}
