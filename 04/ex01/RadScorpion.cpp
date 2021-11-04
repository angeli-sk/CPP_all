/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 19:30:51 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/02 21:31:03 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & copy) : Enemy(copy){}

RadScorpion & RadScorpion::operator = (RadScorpion const & copy)
{
	Enemy::operator = (copy);
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *"<< std::endl;
}
