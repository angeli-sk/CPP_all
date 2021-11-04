/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 17:49:55 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/15 19:47:04 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <string>

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name),
	_damage_points(damage), _AP(apcost) {}

AWeapon::AWeapon(AWeapon const & copy)
{
	*this = copy;
}

AWeapon & AWeapon::operator = (AWeapon const & copy)
{
	this->_name = copy._name;
	this->_damage_points = copy._damage_points;
	this->_AP = copy._AP;
	return *this;
}

AWeapon::~AWeapon(){}

std::string AWeapon::getName() const
{
	return(this->_name);
}

int AWeapon::getAPCost() const
{
	return(this->_AP);
}

int AWeapon::getDamage() const
{
	return(this->_damage_points);
}
