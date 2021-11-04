/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 14:07:57 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/12 21:31:05 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _nameA(name), _weaponA(weapon)
{
	return;
}

HumanA::~HumanA()
{
    return;
}

void    HumanA::attack()
{
    std::cout << this->_nameA << " attacks with his " << this->_weaponA.getType() << std::endl;
}

void    HumanA::setWeapon(Weapon &weapon)
{
    this->_weaponA = weapon;
}