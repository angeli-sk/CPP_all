/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 18:31:54 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/15 19:44:46 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <string>

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type){}

Enemy::Enemy(Enemy const & copy)
{
	*this = copy;
}

Enemy & Enemy::operator = (Enemy const & copy)
{
	this->_hp = copy._hp;
	this->_type = copy._type;
	return *this;
}

Enemy::~Enemy(){}

std::string Enemy::getType() const
{
	return(this->_type);
}

int Enemy::getHP() const
{
	return(this->_hp);
}

void Enemy::takeDamage(int i)
{
	if (i < 0)
		return ;
	this->_hp = this->_hp - i;
	if (this->_hp < 0)
		this->_hp = 0;
}
