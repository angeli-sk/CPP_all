/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 13:37:24 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/05 13:37:58 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const & copy);
		Ice & operator = (Ice const & copy);
		virtual ~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif