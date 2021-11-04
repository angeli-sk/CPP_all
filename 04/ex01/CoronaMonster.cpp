/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   CoronaMonster.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 19:30:51 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/15 19:53:54 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "CoronaMonster.hpp"
#include "Enemy.hpp"
#include <iostream>

CoronaMonster::CoronaMonster() : Enemy(80, "CoronaMonster")
{
	std::cout << "* snif snif snif *" << std::endl;
}

CoronaMonster::CoronaMonster(CoronaMonster const & copy) : Enemy(copy){}

CoronaMonster & CoronaMonster::operator = (CoronaMonster const & copy)
{
	Enemy::operator = (copy);
	return (*this);
}

CoronaMonster::~CoronaMonster()
{
	std::cout << "* coroners *"<< std::endl;
}
