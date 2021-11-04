/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 11:04:32 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/24 20:19:12 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>
#include <time.h>

NinjaTrap::NinjaTrap() : ClapTrap("Default_NinjaTrap",
	120, 60, 120, 60, 1, 60, 5, 0)
{
	std::cout << BOLD << "Default NinjaTrap was made without a name."
		<< FORMAT_RESET << std::endl;
	this->announce();
}

NinjaTrap::NinjaTrap(std::string const & name) : ClapTrap(name,
	120, 60, 120, 60, 1, 60, 5, 0)
{
	std::cout << BOLD << "NinjaTrap was made and it's called "<< this->_name
		<< FORMAT_RESET << std::endl;
	this->announce();
}

NinjaTrap::NinjaTrap(NinjaTrap const & copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "NinjaTrap " << BOLD << this->_name << FORMAT_RESET
		<< " has been copied!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << BOLD << this->_name << FORMAT_RESET << " has been destroyed."
		<< FORMAT_RESET << std::endl;
}

NinjaTrap& NinjaTrap::operator = (const NinjaTrap & obj)
{
	this->_energy_p = obj._energy_p;
	this->_hit_p = obj._hit_p;
	this->_level = obj._level;
	this->_m_attack_damage = obj._m_attack_damage;
	this->_r_attack_damage = obj._r_attack_damage;
	this->_armor_damage_red = obj._armor_damage_red;
	return *this;
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << ITALIC <<"FR4G-TP " << BOLD << this->_name << FORMAT_RESET
		<< " attacks " << target << " at range, causing "
		<< this->_r_attack_damage << " points of damage!" << FORMAT_RESET
		<< std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << ITALIC << "FR4G-TP " << BOLD << this->_name << FORMAT_RESET
		<< " attacks " << target << " at close range, causing "
		<< this->_m_attack_damage << " points of damage!" << FORMAT_RESET
		<< std::endl;
}

void	NinjaTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4G-TP " << BOLD << this->_name <<FORMAT_RESET
		<< " took " << amount << " damage "	<< std::endl;
	this->_hit_p = this->_hit_p - (amount - this->_armor_damage_red);
	if (this->_hit_p <= 0)
	{
		std::cout << ITALIC << "FR4G-TP "  << this->_name  << " died."
			<< FORMAT_RESET  << std::endl;
		this->_hit_p = 0;
	}
	this->announce();
}

void	NinjaTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << BOLD << this->_name <<FORMAT_RESET
		<< " has been repaired with " << amount << " points " << std::endl;
	this->_hit_p = this->_hit_p + amount;
	if (this->_hit_p > this->_max_hit_p)
	{
		std::cout << "Max has been reached!" << std::endl;
		this->_hit_p = this->_max_hit_p;
	}
	this->announce();
}

void	NinjaTrap::ninjaShoebox(FragTrap const & trp)
{
	std::cout << "Some thing funny with " << trp.getName() << ". Haha lol lemao."
		<< std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & trp)
{
	std::cout << "Some thing funny with " << trp._name << ". Haha lol."
		<< std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & trp)
{
	std::cout << "Some thing funny with " << trp.getName() << ". Haha lemao."
		<< std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const & trp)
{
	std::cout << "Some thing funny with " << trp.getName() << ". Ha lol lemao."
		<< std::endl;
}