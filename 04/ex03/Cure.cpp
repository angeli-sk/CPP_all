/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 13:30:48 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/06 19:44:53 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure"){}

Cure::Cure(Cure const & copy) : AMateria("cure")
{
	*this = copy;
}

Cure & Cure::operator = (Cure const & copy)
{
	AMateria::operator = (copy);
	return *this;
}

Cure::~Cure(){}

AMateria* Cure::clone() const
{
	AMateria *clonyboi = new Cure(*this);
	return (clonyboi);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds * " << std::endl;
	AMateria::use(target);
}