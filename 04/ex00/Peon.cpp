/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 07:52:30 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/15 17:59:15 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"
#include <iostream>

Peon::Peon(std::string const & name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const
{
	std::cout  << this->get_name() << " has been turned into a pink pony!"
		<< std::endl;
}

Peon::Peon(Peon const & copy) : Victim(copy){}

Peon & Peon::operator = (Peon const & copy)
{
	Victim::operator = (copy);
	return (*this);
}
