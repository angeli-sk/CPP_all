/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 13:57:13 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/24 20:56:16 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>
#include <time.h>

FragTrap::FragTrap() : ClapTrap("Default_FragTrap",
	100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << BOLD << "Default FragTrap was made without a name."
		<< FORMAT_RESET << std::endl;
	this->announce();
}

FragTrap::FragTrap(std::string const & name) : ClapTrap(name,
	100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << BOLD << "FragTrap was made and it's called "<< this->_name
		<< FORMAT_RESET << std::endl;
	this->announce();
}

FragTrap::FragTrap(FragTrap const & copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "FragTrap " << BOLD << this->_name << FORMAT_RESET
		<< " has been copied!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << BOLD << this->_name << FORMAT_RESET << " has been destroyed."
		<< FORMAT_RESET << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap & obj)
{
	this->_energy_p = obj._energy_p;
	this->_hit_p = obj._hit_p;
	this->_level = obj._level;
	this->_m_attack_damage = obj._m_attack_damage;
	this->_r_attack_damage = obj._r_attack_damage;
	this->_armor_damage_red = obj._armor_damage_red;
	return *this;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << ITALIC <<"FRAGTRAP:FR4G-TP " << BOLD << this->_name << FORMAT_RESET
		<< " attacks " << target << " at range, causing "
		<< this->_r_attack_damage << " points of damage!" << FORMAT_RESET
		<< std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << ITALIC << "FR4G-TP " << BOLD << this->_name << FORMAT_RESET
		<< " attacks " << target << " at close range, causing "
		<< this->_m_attack_damage << " points of damage!" << FORMAT_RESET
		<< std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
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

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int x;

	std::string array[5] = {
		"an attack of pure rage!!!?!",
		"corona.",
		"pure tiredness and stress of having too little blackhole days"
		" and too many big projects that I do  not understand pls send help.",
		"trash talk. It's super effective!",
		"bad jokes." };
    x = (rand() % 5);
	this->_energy_p = this->_energy_p - 25;
	if (this->_energy_p < 0)
	{
		this->announce();
		return ;
	}
	std::cout << target << " is attacked with " << array[x] << std::endl;
	this->announce();
}

std::string FragTrap::getName() const
{
	return (this->_name);
}