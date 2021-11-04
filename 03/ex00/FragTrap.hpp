/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 13:57:11 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/21 12:58:49 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# define COLOR_RESET "\033[37m"
# define COLOR_RED "\033[38;5;196m"
# define COLOR_GREEN "\033[38;5;46m"
# define COLOR_BLUE "\033[38;5;51m"
# define COLOR_BLU "\033[38;5;152m"
# define COLOR_ORANGE "\033[38;5;214m"
# define COLOR_PURPLE "\033[38;5;98m"
# define COLOR_YELLOW "\033[38;5;220m"
# define COLOR_PINK "\033[38;5;205m"
# define BOLD "\e[1m"
# define ITALIC "\e[3m"
# define FORMAT_RESET "\e[0m"

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