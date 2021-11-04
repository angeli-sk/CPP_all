/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 17:31:22 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/15 19:45:41 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

Character::Character(std::string const & name) : _name(name), _ap(40),
	_weapis(NULL) {}

Character::Character(Character const & copy)
{
	*this = copy;
}

Character & Character::operator = (Character const & copy)
{
	this->_name = copy._name;
	this->_ap = copy._ap;
	this->_weapis = copy._weapis;
	return *this;
}

Character::~Character() {}

void Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void Character::equip(AWeapon* weapis)
{
	this->_weapis = weapis;
}

void Character::attack(Enemy* enemis)
{
	if (this->_weapis == NULL)
		return ;
	if (this->_ap < this->_weapis->getAPCost())
		return ;
	std::cout << this->_name << " attacks " << enemis->getType()
		<< " with a " << this->_weapis->getName() << std::endl;
	enemis->takeDamage(this->_weapis->getDamage());
	this->_ap -= this->_weapis->getAPCost();
	if (enemis->getHP() <= 0)
		delete enemis;
}

std::string Character::getName() const
{
	return (this->_name);
}

int Character::getAP() const
{
	return (this->_ap);
}

AWeapon	*Character::getWeapon() const
{
	return (this->_weapis);
}

std::ostream & operator << (std::ostream &out, Character const & obj)
{
	if (obj.getWeapon() == NULL)
		out << "me has " << obj.getAP() << " AP and is unarmed" << std::endl;
	else
	{
		out << obj.getName() << " has " << obj.getAP() << " AP and wields a "
		<< obj.getWeapon()->getName() << std::endl;
	}
	return out;
}
