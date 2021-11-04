/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 07:52:24 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/15 19:36:28 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Lemao.hpp"
#include <iostream>

int main()
{
	Sorcerer robert("Boris", "the kind one");
	Victim jim("Jonas");
	Peon joe("Joe");
	Peon matheus("Matheus");
	Lemao thijs("Thijs");

	matheus = joe;

	std::cout << robert << jim << joe << thijs;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(thijs);
	return 0;
}
