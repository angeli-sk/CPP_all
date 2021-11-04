/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 14:05:46 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/21 13:46:15 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

MateriaSource::MateriaSource() : _idx(0){}

MateriaSource::MateriaSource(MateriaSource const & copy)
{
	*this = copy;
}

MateriaSource & MateriaSource::operator = (MateriaSource const & copy)
{
	for (int i = 0; i < 4; i++)
		this->_copy[i] = copy._copy[i];

	this->_idx = copy._idx;
	return *this;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < this->_idx; i++)
		delete this->_copy[i];
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (this->_idx > 3)
		return ;
	this->_copy[this->_idx] = materia;
	this->_idx++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_idx; i++)
	{
		if (this->_copy[i]->getType() == type)
			return(this->_copy[i]->clone());
	}
	return 0;
}
