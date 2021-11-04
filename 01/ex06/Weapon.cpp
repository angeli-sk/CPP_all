/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 14:07:28 by akramp        #+#    #+#                 */
/*   Updated: 2020/08/04 16:16:15 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return;
}

Weapon::Weapon(std::string weapon)
{
    this->_type = weapon;
    return;
}

Weapon::~Weapon()
{
    return;
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}

const std::string &Weapon::getType()
{
    return (this->_type);
}
