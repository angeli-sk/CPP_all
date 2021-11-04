/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 18:27:57 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/03 10:42:30 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <string>

class Enemy
{
	private:
		int _hp;
		std::string _type;
		Enemy();
	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & copy);
		Enemy & operator = (Enemy const & copy);
		virtual ~Enemy();
		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int);
};

#endif