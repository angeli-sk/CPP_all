/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 13:30:51 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/07 09:29:19 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice"){}

Ice::Ice(Ice const & copy) : AMateria("ice")
{
	*this = copy;
}

Ice & Ice::operator = (Ice const & copy)
{
	AMateria::operator = (copy);
	return *this;
}

Ice::~Ice(){}

AMateria* Ice::clone() const
{
	AMateria *clonyboi = new Ice(*this);
	return (clonyboi);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
		<< std::endl;
	AMateria::use(target);
}