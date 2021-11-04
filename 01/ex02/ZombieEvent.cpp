/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 13:16:39 by akramp        #+#    #+#                 */
/*   Updated: 2020/08/03 15:21:49 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
    return;
}

ZombieEvent::~ZombieEvent(void)
{
    return;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    this->_name = name;
    Zombie* zombieinstance = new Zombie(this->_name, this->_type, this->_color, this->_message);
    return (zombieinstance);
}

void ZombieEvent::setZombieType(std::string input)
{
    this->_type = input;
}

void ZombieEvent::setZombieColor(std::string input)
{
    this->_color = input;
}

void ZombieEvent::setZombieMessage(std::string input)
{
    this->_message = input;
}