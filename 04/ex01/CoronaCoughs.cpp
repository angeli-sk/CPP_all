/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   CoronaCoughs.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 20:57:14 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/15 19:52:44 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "CoronaCoughs.hpp"
#include <string>
#include <iostream>

CoronaCoughs::CoronaCoughs() : AWeapon("Corona Coughs", 21, 5){}

CoronaCoughs::CoronaCoughs(CoronaCoughs const & copy) : AWeapon(copy){}

CoronaCoughs & CoronaCoughs::operator = (CoronaCoughs const & copy)
{
	AWeapon::operator = (copy);
	return (*this);
}

CoronaCoughs::~CoronaCoughs(){}

void CoronaCoughs::attack() const
{
	std::cout << "* hatchooo oo *" << std::endl;
}
