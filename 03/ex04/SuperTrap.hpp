/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:55:42 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/24 21:01:24 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <string>
# include <iostream>
# include "colors.h"
# include "toupper.h"
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class	SuperTrap : public NinjaTrap, public FragTrap
{
	public:
		SuperTrap();
		SuperTrap(std::string const & name);
		SuperTrap(SuperTrap const & copy);
		SuperTrap & operator = (SuperTrap const & copy);
		~SuperTrap();
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif