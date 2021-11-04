/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/21 11:35:59 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/21 16:25:19 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>


// if you dynamic cast a reference to a type that it isn't, it will throw a bad_cast exception

void identify_from_reference(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::exception& e){}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(std::exception& e){}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(std::exception& e){}
}

// if you dynamic cast a pointer to type that it isn't, the cast will return a NULL

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

Base * generate(void)
{
	srand( time(NULL) );
	int i = (rand() % 3);

	switch(i)
	{
		case 0:
		{
			A *a = new A;
			return(dynamic_cast<Base*>(a));
		}
		case 1:
		{
			B *b = new B;
			return(dynamic_cast<Base*>(b));
		}
		case 2:
		{
			C *c = new C;
			return(dynamic_cast<Base*>(c));
		}
	}
	return (NULL);
}

int		main()
{
	Base *base;

	base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);

}
