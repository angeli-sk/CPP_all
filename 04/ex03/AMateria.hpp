/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 07:54:11 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/05 13:44:29 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	private:
		std::string _type;
		unsigned int _xp;
		AMateria();

	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & copy);
		AMateria & operator = (AMateria const & copy);
		virtual ~AMateria();
		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif