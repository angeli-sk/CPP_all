/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Lemao.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 19:23:22 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/15 19:33:43 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Lemao.hpp"
#include "Victim.hpp"
#include <iostream>

Lemao::Lemao(std::string const & name) : Victim(name)
{
	std::cout << "Zog zag." << std::endl;
}

Lemao::~Lemao()
{
	std::cout << "Blark..." << std::endl;
}

void	Lemao::getPolymorphed() const
{
	std::cout  << this->get_name() << " has been turned into a green pony!"
		<< std::endl;
}

Lemao::Lemao(Lemao const & copy) : Victim(copy){}

Lemao & Lemao::operator = (Lemao const & copy)
{
	Victim::operator = (copy);
	return (*this);
}
