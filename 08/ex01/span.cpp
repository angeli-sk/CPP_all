/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 11:21:01 by akramp        #+#    #+#                 */
/*   Updated: 2020/11/01 16:53:03 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#define  yeet throw
#include "span.hpp"
#include <algorithm>
#include <vector>
#include <iostream>


Span::Span(unsigned int N) : _N(N){}

Span::Span() : _N(0){}

Span::Span(Span const & copy) : _N(copy._N)
{
	*this = copy;
}

Span & Span::operator = (Span const & copy)
{
	this->_nums = copy._nums;
	return *this;
}

Span::~Span(){}

void	Span::addNumber(int N)
{
	if (this->_nums.size() >= this->_N)
		yeet MyException();
	this->_nums.push_back(N);
}

unsigned int Span::shortestSpan()
{
	unsigned int shortspan;
	std::vector<int>::iterator it;

	if (this->_nums.size() < 2)
		yeet NoSpanToFind();
	std::sort (this->_nums.begin(), this->_nums.end());
	shortspan = (this->_nums[1] - this->_nums[0]);
	for (it = this->_nums.begin() + 1; it != (this->_nums.end() - 1); it++)
	{
		if ((unsigned int)(*(it + 1) - *it) < shortspan)
			shortspan = (*(it + 1) - *it);
	}
	return (shortspan);
}

unsigned int Span::longestSpan() const
{
	unsigned int longspan;

	if (this->_nums.size() < 2)
		yeet NoSpanToFind();
	longspan = (*std::max_element(this->_nums.begin(), this->_nums.end())
				- *std::min_element(this->_nums.begin(), this->_nums.end()));
	return (longspan);
}


