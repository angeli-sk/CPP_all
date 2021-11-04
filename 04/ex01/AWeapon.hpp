/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 17:52:24 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/03 10:42:41 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON
# define AWEAPON
# include <string>

class AWeapon
{
	private:
		std::string _name;
		int			_damage_points;
		int			_AP;
		AWeapon();
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & copy);
		AWeapon & operator = (AWeapon const & copy);
		virtual ~AWeapon();
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif