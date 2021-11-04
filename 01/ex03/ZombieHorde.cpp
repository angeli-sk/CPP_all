/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:49:04 by akramp        #+#    #+#                 */
/*   Updated: 2020/08/03 19:08:07 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
    this->_N = N;
    this->_Horde = this->createHorde();
    return;
}

ZombieHorde::~ZombieHorde(void)
{
    delete[] this->_Horde;
    return;
}

Zombie* ZombieHorde::createHorde()
{
    Zombie *zombieinstance = new Zombie[this->_N];
    return (zombieinstance);
}

void    ZombieHorde::announce()
{    
    for (int i = 0; i < this->_N; i++)
    {
        this->_Horde[i].announce();
    }
}