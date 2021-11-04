/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   CoronaMonster.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 19:01:16 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/15 19:54:14 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORONAMONSTER_HPP
# define CORONAMONSTER_HPP
# include "Enemy.hpp"

class CoronaMonster : public Enemy
{
	public:
		CoronaMonster();
		CoronaMonster(CoronaMonster const & copy);
		CoronaMonster & operator = (CoronaMonster const & copy);
		virtual ~CoronaMonster();

};

#endif
