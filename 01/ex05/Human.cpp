/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 19:36:13 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/12 21:27:36 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human()
{
    return;
}

Human::~Human()
{
    return;
}

std::string Human::identify() const
{
    return (_smort.identify());
}

const Brain &Human::getBrain()
{
    return (this->_smort);
}