/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 22:02:25 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/02 21:26:18 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include <string>
#include <iostream>

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8){}

PowerFist::PowerFist(PowerFist const & copy) : AWeapon(copy){}

PowerFist & PowerFist::operator = (PowerFist const & copy)
{
	AWeapon::operator = (copy);
	return (*this);
}

PowerFist::~PowerFist(){}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
