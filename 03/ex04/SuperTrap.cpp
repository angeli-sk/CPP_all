/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:55:45 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/24 21:21:50 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "SuperTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap("Default_SuperTrap",
	120, 100, 120, 100, 1, 60, 5, 0)
{
	std::cout << BOLD << "Default SuperTrap was made without a name."
		<< FORMAT_RESET << std::endl;
	this->announce();
}

SuperTrap::SuperTrap(std::string const & name) : ClapTrap(name,
	120, 100, 120, 100, 1, 60, 5, 0)
{
	std::cout << BOLD << "SuperTrap was made and it's called "<< this->_name
		<< FORMAT_RESET << std::endl;
	this->announce();
}

SuperTrap::SuperTrap(SuperTrap const & copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "SuperTrap " << BOLD << this->_name << FORMAT_RESET
		<< " has been copied!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << BOLD << this->_name << FORMAT_RESET << "; F in the chat."
		<< FORMAT_RESET << std::endl;
}

SuperTrap& SuperTrap::operator = (const SuperTrap & obj)
{
	this->_energy_p = obj._energy_p;
	this->_hit_p = obj._hit_p;
	this->_level = obj._level;
	this->_m_attack_damage = obj._m_attack_damage;
	this->_r_attack_damage = obj._r_attack_damage;
	this->_armor_damage_red = obj._armor_damage_red;
	return *this;
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::takeDamage(unsigned int amount)
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

void	SuperTrap::beRepaired(unsigned int amount)
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