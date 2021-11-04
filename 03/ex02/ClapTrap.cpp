/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 21:15:27 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/23 10:48:53 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include <time.h>

ClapTrap::ClapTrap() : _name("Default_Claptrap"), _max_energy_p(50),
_max_hit_p(100), _energy_p(50), _hit_p(100),  _level(1),  _m_attack_damage(20),
_r_attack_damage(15), _armor_damage_red(3)
{
	std::cout << BOLD << "Default ClapTrap was made without a name."
		<< FORMAT_RESET << std::endl;
	this->announce();
}

ClapTrap::ClapTrap(std::string const & name) : _name(name), _max_energy_p(50),
_max_hit_p(100), _energy_p(50), _hit_p(100),  _level(1),  _m_attack_damage(20),
_r_attack_damage(15), _armor_damage_red(3)
{
	std::cout << BOLD << "ClapTrap was made and it's called "<< this->_name
		<< FORMAT_RESET << std::endl;
	this->announce();
}

ClapTrap::ClapTrap(std::string const & name, int maxenergyp, int maxhitp,
	int energyp, int hitp, int level, int mattackdamage, int rattackdamage,
	int armordamagered) : _name(name), 	_max_energy_p(maxenergyp),
	_max_hit_p(maxhitp), _energy_p(energyp), _hit_p(hitp),  _level(level),
	_m_attack_damage(mattackdamage), _r_attack_damage(rattackdamage),
	_armor_damage_red(armordamagered)
{
	std::cout << BOLD << "ClapTrap was made and it's called "<< this->_name
		<< FORMAT_RESET << std::endl;
	this->announce();
}

ClapTrap::ClapTrap(ClapTrap const &copy) : _name(copy._name),
	_max_energy_p(copy._max_energy_p), _max_hit_p(copy._max_hit_p)
{
	*this = copy;
	std::cout << "ClapTrap " << BOLD << this->_name << FORMAT_RESET
		<< " has been copied!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << BOLD << this->_name << FORMAT_RESET << " went to the light."
		<< FORMAT_RESET << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap & obj)
{
	this->_energy_p = obj._energy_p;
	this->_hit_p = obj._hit_p;
	this->_level = obj._level;
	this->_m_attack_damage = obj._m_attack_damage;
	this->_r_attack_damage = obj._r_attack_damage;
	this->_armor_damage_red = obj._armor_damage_red;
	return *this;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << ITALIC <<"ClapTrap " << BOLD << this->_name << FORMAT_RESET
		<< " attacks " << target << " at range, causing "
		<< this->_r_attack_damage << " points of damage!" << FORMAT_RESET
		<< std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << ITALIC << "ClapTrap " << BOLD << this->_name << FORMAT_RESET
		<< " attacks " << target << " at close range, causing "
		<< this->_m_attack_damage << " points of damage!" << FORMAT_RESET
		<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << BOLD << this->_name <<FORMAT_RESET  << " took "
		<< amount << " damage "	<< std::endl;
	this->_hit_p = this->_hit_p - (amount - this->_armor_damage_red);
	if (this->_hit_p <= 0)
	{
		std::cout << ITALIC << "ClapTrap "  << this->_name  << " died."
		<< FORMAT_RESET  << std::endl;
		this->_hit_p = 0;
	}
	this->announce();
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << BOLD << this->_name <<FORMAT_RESET
		<< " has been repaired with " << amount << " points " << std::endl;
	this->_hit_p = this->_hit_p + amount;
	if (this->_hit_p > this->_max_hit_p)
	{
		std::cout << "Max has been reached!" << std::endl;
		this->_hit_p = this->_max_hit_p;
	}
	this->announce();
}

void	ClapTrap::announce()
{
	std::cout << COLOR_PINK << "--------------------------" << COLOR_RESET
		<< std::endl;
	std::cout << COLOR_PURPLE << "\t" << ft_toupper(this->_name) << COLOR_RESET
		<< std::endl;
	if (this->_hit_p <= (this->_max_hit_p / 4))
		std::cout << COLOR_RED;
	else if (this->_hit_p <= (this->_max_hit_p / 2))
		std::cout << COLOR_YELLOW;
	else
		std::cout << COLOR_GREEN;
	std::cout << "\tHP: " << this->_hit_p << "/" << this->_max_hit_p
		<< std::endl;
	if (this->_energy_p <= (this->_max_energy_p / 4))
		std::cout << COLOR_ORANGE;
	else if (this->_energy_p <= (this->_max_energy_p / 2))
		std::cout << COLOR_BLU;
	else
		std::cout << COLOR_BLUE;
	std::cout << "\tEP: " << this->_energy_p << "/" << this->_max_energy_p
		<< COLOR_RESET << std::endl;
	std::cout << COLOR_PINK << "--------------------------" << COLOR_RESET
		<< std::endl;
}