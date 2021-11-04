/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/03 14:33:17 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/15 20:05:55 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include <cstdlib>

Squad::Squad()
{
	this->_count = 0;
	this->_unit = NULL;
}

Squad::Squad(Squad const & copy)
{
	this->_count = 0;
	this->_unit = NULL;
	*this = copy;
}

Squad & Squad::operator = (Squad const & copy)
{
	for(int i = 0; i < this->_count; i++)
		delete this->_unit[i];
	delete [] this->_unit;
	this->_count = copy._count;
	this->_unit = new ISpaceMarine*[this->_count + 1];
	for(int i = 0; i < this->_count; i++)
		this->_unit[i] = copy._unit[i]->clone();
	return *this;
}

Squad::~Squad()
{
	for(int i = 0; i < this->_count; i++)
		delete this->_unit[i];
	delete [] this->_unit;
}

int Squad::getCount() const
{
	return (this->_count);
}

ISpaceMarine* Squad::getUnit(int i) const
{
	if (i >= getCount() || i < 0)
		return (NULL);
	return (this->_unit[i]);
}

int Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return (this->_count);
	for (int i = 0; i < this->_count; i++)
	{
		if (this->_unit[i] == unit)
			return (this->_count);
	}
	ISpaceMarine **copy_unit = new ISpaceMarine*[this->_count + 1];
	for(int i = 0; i < this->_count; i++)
		copy_unit[i] = this->_unit[i];
	copy_unit[this->_count] = unit;
	delete [] this->_unit;
	this->_unit = copy_unit;
	this->_count++;
	return (this->_count);
}
