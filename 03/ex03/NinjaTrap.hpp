/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 11:04:28 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/23 16:37:56 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <string>
# include <iostream>
# include "colors.h"
# include "toupper.h"
# include "NinjaTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"
# include "FragTrap.hpp"

class	NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string const & name);
		NinjaTrap(NinjaTrap const & copy);
		NinjaTrap & operator = (NinjaTrap const & copy);
		~NinjaTrap();
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	ninjaShoebox(FragTrap const & trp);
		void	ninjaShoebox(NinjaTrap const & trp);
		void	ninjaShoebox(ScavTrap const & trp);
		void	ninjaShoebox(ClapTrap const & trp);
};

#endif