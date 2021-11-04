/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 11:23:24 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/21 13:47:24 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
Character::Character(){}

Character::Character(std::string const & name) : _name(name), _equip_i(0)
{
	for (int i = 0; i < 4; i++)
		this->_slots[i] = 0;
}

Character::Character(Character const & copy)
{
	*this = copy;
}

Character & Character::operator = (Character const & copy)
{
	this->_name = copy._name;
	this->_equip_i = copy._equip_i;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = copy._slots[i];
	return *this;
}

Character:: ~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i])
		{
			std::cout << i << std::endl;
			delete (this->_slots[i]);
		}
	}
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (!m || this->_equip_i >= 4)
		return ;
	this->_slots[this->_equip_i] = m;
	this->_equip_i++;
}

void Character::unequip(int idx)
{
	int i;
	if (idx >= 4)
		return ;
	this->slots[idx] = 0;
	for (i = idx; i < this->_equip_i; i++)
		this->_slots[i] = this->_slots[i + 1];
	this->_slots[i] = 0;
	this->_equip_i--;
}

void Character::use(int idx, ICharacter& target)
{
	if(idx >= this->_equip_i)
		return ;
	this->_slots[idx]->use(target);
}
