/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 17:27:31 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/15 19:58:22 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"
#include "CoronaCoughs.hpp"
#include "CoronaMonster.hpp"
#include <iostream>

int main()
{
	Character* me = new Character("me");

	std::cout << *me;
	Enemy* a = new CoronaMonster();
	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* pc = new CoronaCoughs();

	pr->attack();
	pf->attack();
	c->takeDamage(10);
	b->takeDamage(6);
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	std::cout << *me;
	me->equip(pc);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;

	delete me;
	delete a;
	delete b;
	delete c;
	delete pr;
	delete pf;
	delete pc;


	return 0;
}
