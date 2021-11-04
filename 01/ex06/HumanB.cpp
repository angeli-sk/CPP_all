/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 14:08:21 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/12 21:31:00 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
    this->_nameB = name;
}

HumanB::~HumanB()
{
    return;
}

void HumanB::attack()
{
    std::cout << this->_nameB << " attacks with his " << this->_weaponB->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weaponB = &weapon;
}
