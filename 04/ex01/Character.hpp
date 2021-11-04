/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 17:32:16 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/03 10:44:08 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		std::string _name;
		int _ap;
		AWeapon *_weapis;
		Character();
	public:
		Character(std::string const & name);
		Character(Character const & copy);
		Character & operator = (Character const & copy);
		virtual ~Character();
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string getName() const;
		int getAP() const;
		AWeapon *getWeapon() const;
};

std::ostream & operator << (std::ostream &out, Character const & obj);

#endif