/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/03 16:48:52 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/15 20:06:23 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISpaceMarine.hpp"
# include "ISquad.hpp"

class Squad :  public ISquad
{
	private:
		int				_count;
		ISpaceMarine 	**_unit;
	public:
		Squad();
		Squad(Squad const & copy);
		Squad & operator = (Squad const & copy);
		virtual ~Squad();
		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*);
};

#endif
