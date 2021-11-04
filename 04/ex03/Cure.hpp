/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 14:05:36 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/06 19:12:00 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const & copy);
		Cure & operator = (Cure const & copy);
		virtual ~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif