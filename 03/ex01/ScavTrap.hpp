/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 07:50:34 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/23 09:16:03 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>
# include "colors.h"

class	ScavTrap
{
	private:
		std::string _name;
		int const	_max_energy_p;
		int const	_max_hit_p;
		int 		_energy_p;
		int			_hit_p;
		int			_level;
		int			_m_attack_damage;
		int			_r_attack_damage;
		int			_armor_damage_red;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & copy);
		ScavTrap & operator = (ScavTrap const & copy);
		~ScavTrap();
		void	announce();
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewcomer(std::string const & target);
};

std::string	ft_toupper(std::string str);

#endif