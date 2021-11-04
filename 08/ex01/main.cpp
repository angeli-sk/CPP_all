/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 11:20:59 by akramp        #+#    #+#                 */
/*   Updated: 2020/11/01 17:05:24 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <ctime>
#include "span.hpp"
int	main()
{
	srand(time(NULL));
	std::vector<int> veccy;
	std::vector<int> ve;
	veccy.push_back(66);
	veccy.push_back(7777);
	veccy.push_back(88888);
	Span sp = Span(8);
	Span spp = Span(10000);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(12);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	for (int i = 0; i < 10000; i++)
	{
		veccy.push_back(rand());
		ve.push_back(rand());
	}

	try
	{
		sp.addNumber(veccy.begin(), veccy.end());
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		spp.addNumber(ve.begin(), ve.end());
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << spp.shortestSpan() << std::endl;
	std::cout << spp.longestSpan() << std::endl;
}

