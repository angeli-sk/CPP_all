/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 20:57:14 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/01 22:09:28 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include <string>
#include <iostream>

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5){}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & copy) : AWeapon(copy){}

PlasmaRifle & PlasmaRifle::operator = (PlasmaRifle const & copy)
{
	AWeapon::operator = (copy);
	return (*this);
}

PlasmaRifle::~PlasmaRifle(){}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}