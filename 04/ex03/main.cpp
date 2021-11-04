/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 07:53:47 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/07 09:38:47 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

void	asdf()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	AMateria* tmp1;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	ICharacter* bob = new Character("bob");
	std::cout << "lemamo" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->unequip(2);
	std::cout << "lemamo2" << std::endl;
	me->use(0, *bob);
	me->unequip(0);
	me->use(0, *bob);

	delete tmp;
	delete bob;
	delete me;
	delete src;
}

int		main(int ac, char **av)
{
	asdf();
	if (ac > 1 && !strcmp(av[1],"full"))
		system("leaks a.out");
	else
	{
		system("leaks a.out >> leaks.txt");
		system("grep \"total leaked bytes\" leaks.txt");
		system("rm leaks.txt");
	}
	return (0);
}