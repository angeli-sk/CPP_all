/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 13:57:11 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/22 21:17:18 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# include "colors.h"

class	FragTrap
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
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & copy);
		FragTrap & operator = (FragTrap const & copy);
		~FragTrap();
		void	announce();
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);
};

std::string	ft_toupper(std::string str);

#endif