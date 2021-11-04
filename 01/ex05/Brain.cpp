/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 19:35:50 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/12 21:28:31 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void)
{
    this->_brain_img = "\n\033[38;5;175m    _.--'\"'.\n  (  ( (   )\n  (o)_    ) )\n     (o)_.'\n        )/\t<---- It's a brain !!\n\e[0m";
    return;
}

Brain::~Brain(void)
{
    return;
}

std::string Brain::get_brain_img() const
{
    return (this->_brain_img);
}

std::string Brain::identify() const
{
	const void * address = static_cast<const void*>(this);
	std::stringstream ss;
	ss << address;
	std::string name = ss.str();
    return (name);
}