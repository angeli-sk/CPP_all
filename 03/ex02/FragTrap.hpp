/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 13:57:11 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/23 09:21:42 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "colors.h"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string const & name);
		FragTrap(FragTrap const & copy);
		FragTrap & operator = (FragTrap const & copy);
		~FragTrap();
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);
};

std::string	ft_toupper(std::string str);

#endif