/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 13:57:11 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/23 16:26:59 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "colors.h"
# include "toupper.h"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string const & name);
		FragTrap(FragTrap const & copy);
		FragTrap & operator = (FragTrap const & copy);
		~FragTrap();
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		vaulthunter_dot_exe(std::string const & target);
		std::string getName() const;
};

#endif