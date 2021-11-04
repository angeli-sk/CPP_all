/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 07:50:28 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/23 11:01:06 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>
#include <time.h>

ScavTrap::ScavTrap() : ClapTrap("Default_ScavTrap",
	50, 100, 50, 100, 1, 20, 15, 3)
{
	std::cout << BOLD << "A nameless default ScavTrap was made." << FORMAT_RESET << std::endl;
	this->announce();
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name,
	50, 100, 50, 100, 1, 20, 15, 3)
{
	std::cout << BOLD << this->_name << FORMAT_RESET
		<< " the ScavTrap was made!" << std::endl;
	this->announce();
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "A ScavTrap copy;" << BOLD << this->_name
		<< FORMAT_RESET << " has been created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << BOLD << this->_name << FORMAT_RESET << " died."
		<< FORMAT_RESET << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap & obj)
{
	this->_energy_p = obj._energy_p;
	this->_hit_p = obj._hit_p;
	this->_level = obj._level;
	this->_m_attack_damage = obj._m_attack_damage;
	this->_r_attack_damage = obj._r_attack_damage;
	this->_armor_damage_red = obj._armor_damage_red;
	return *this;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << ITALIC <<"ScavTrap " << BOLD << this->_name << FORMAT_RESET
		<< " attack'ed " << target << " from a distance, doing "
		<< this->_r_attack_damage << " points of damage!" << FORMAT_RESET
		<< std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << ITALIC << "ScavTrap " << BOLD << this->_name << FORMAT_RESET
		<< " attack'ed " << target	<< " real close, causing "
		<< this->_m_attack_damage << " points of damage!" << FORMAT_RESET
		<< std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap; " << BOLD << this->_name <<FORMAT_RESET
		<< ", *BLAM* " << amount << " damage!" << std::endl;
	this->_hit_p = this->_hit_p - (amount - this->_armor_damage_red);
	if (this->_hit_p <= 0)
	{
		std::cout << ITALIC << "ScavTrap "  << this->_name  << " died."
			<< FORMAT_RESET  << std::endl;
		this->_hit_p = 0;
	}
	this->announce();
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap; " << BOLD << this->_name <<FORMAT_RESET
		<< ", *SHHHWOOO* " << amount << " points healed! " << std::endl;
	this->_hit_p = this->_hit_p + amount;
	if (this->_hit_p > this->_max_hit_p)
	{
		std::cout << "Max has been reached!" << std::endl;
		this->_hit_p = this->_max_hit_p;
	}
	this->announce();
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	int x;
	std::string array[5] = {
		"!! I challenge thou!",
		"!! *yoink*",
		"!! ugh. Rude?",
		"!! Try me.",
		"!! Pff. How naive." };
    x = (rand() % 5);
	this->_energy_p = this->_energy_p - 25;
	if (this->_energy_p < 0)
	{
		this->announce();
		return ;
	}
	std::cout << target << array[x] << std::endl;
	this->announce();
}
