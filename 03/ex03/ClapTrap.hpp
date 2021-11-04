/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 21:18:48 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/23 16:43:55 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>
# include "colors.h"
# include "ClapTrap.hpp"
# include "toupper.h"

class	ClapTrap
{
	protected:
		std::string const _name;
		int const	_max_energy_p;
		int const	_max_hit_p;
		int 		_energy_p;
		int			_hit_p;
		int			_level;
		int			_m_attack_damage;
		int			_r_attack_damage;
		int			_armor_damage_red;
		ClapTrap(std::string const & name, int maxenergyp, int maxhitp,
				int energyp, int hitp, int level, int mattackdamage,
				int rattackdamage, int armordamagered);
	public:
		ClapTrap();
		ClapTrap(std::string const & name);
		ClapTrap(ClapTrap const & copy);
		ClapTrap & operator = (ClapTrap const & copy);
		~ClapTrap();
		void	announce() const;
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string getName() const;
};

#endif