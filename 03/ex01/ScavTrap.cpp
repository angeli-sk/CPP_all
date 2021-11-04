/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 07:50:28 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/22 08:50:39 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>
#include <time.h>

ScavTrap::ScavTrap() : _name("Default_ScavTrap"), _max_energy_p(50),
_max_hit_p(100), _energy_p(50), _hit_p(100),  _level(1),  _m_attack_damage(20),
_r_attack_damage(15), _armor_damage_red(3)
{
	std::cout << BOLD << "A nameless default ScavTrap was made." << FORMAT_RESET << std::endl;
	this->announce();
}

ScavTrap::ScavTrap(std::string name) : _name(name), _max_energy_p(50),
_max_hit_p(100), _energy_p(50), _hit_p(100),  _level(1),  _m_attack_damage(20),
_r_attack_damage(15), _armor_damage_red(3)
{
	std::cout << BOLD << this->_name << FORMAT_RESET << " the ScavTrap was made!" << std::endl;
	this->announce();
}

ScavTrap::ScavTrap(ScavTrap const &copy) : _max_energy_p(copy._max_energy_p), _max_hit_p(copy._max_hit_p)
{
	*this = copy;
	std::cout << "A ScavTrap copy;" << BOLD << this->_name << FORMAT_RESET << "has been created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << BOLD << this->_name << FORMAT_RESET << " died." << FORMAT_RESET << std::endl;
	if (!(this->_name == "Default_ScavTrap"))
		std::cout << "R.I.P. " << BOLD << this->_name << FORMAT_RESET << "."  << std::endl;
	else
		std::cout << "It was a nameless death." << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap & obj)
{
	this->_name = obj._name;
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
	std::cout << ITALIC <<"ScavTrap " << BOLD << this->_name << FORMAT_RESET << " attack'ed " << target
		<< " from a distance, doing " << this->_r_attack_damage
		<< " points of damage!" << FORMAT_RESET << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << ITALIC << "ScavTrap " << BOLD << this->_name << FORMAT_RESET << " attack'ed " << target
		<< " real close, causing " << this->_m_attack_damage
		<< " points of damage!" << FORMAT_RESET << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap; " << BOLD << this->_name <<FORMAT_RESET  << ", *BLAM* " << amount << " damage!"
		<< std::endl;
	this->_hit_p = this->_hit_p - (amount - this->_armor_damage_red);
	if (this->_hit_p <= 0)
	{
		std::cout << ITALIC << "ScavTrap "  << this->_name  << " died." << FORMAT_RESET  << std::endl;
		this->_hit_p = 0;
	}
	this->announce();
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap; " << BOLD << this->_name <<FORMAT_RESET  << ", *SHHHWOOO* " << amount << " points healed! "
		<< std::endl;
	this->_hit_p = this->_hit_p + amount;
	if (this->_hit_p > this->_max_hit_p)
	{
		std::cout << "Max has been reached!" << std::endl;
		this->_hit_p = this->_max_hit_p;
	}
	this->announce();
}

void	ScavTrap::announce()
{
	std::cout << COLOR_PINK << "--------------------------" << COLOR_RESET << std::endl;
	std::cout << COLOR_PURPLE << "\t" << ft_toupper(this->_name) << COLOR_RESET << std::endl;
	if (this->_hit_p <= (this->_max_hit_p / 4))
		std::cout << COLOR_RED;
	else if (this->_hit_p <= (this->_max_hit_p / 2))
		std::cout << COLOR_YELLOW;
	else
		std::cout << COLOR_GREEN;
	std::cout << "\tHP: " << this->_hit_p << "/" << this->_max_hit_p << std::endl;
	if (this->_energy_p <= (this->_max_energy_p / 4))
		std::cout << COLOR_ORANGE;
	else if (this->_energy_p <= (this->_max_energy_p / 2))
		std::cout << COLOR_BLU;
	else
		std::cout << COLOR_BLUE;
	std::cout << "\tEP: " << this->_energy_p << "/" << this->_max_energy_p
		<< COLOR_RESET << std::endl;
	std::cout << COLOR_PINK << "--------------------------" << COLOR_RESET << std::endl;
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
