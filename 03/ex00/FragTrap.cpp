/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 13:57:13 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/23 11:09:50 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>
#include <time.h>

FragTrap::FragTrap() : _name("Default_FR4G-TP"), _max_energy_p(100),
_max_hit_p(100), _energy_p(100), _hit_p(100),  _level(1),  _m_attack_damage(30),
_r_attack_damage(20), _armor_damage_red(5)
{
	std::cout << BOLD << "Default FragTrap was made without a name." << FORMAT_RESET << std::endl;
	this->announce();
}

FragTrap::FragTrap(std::string name) : _name(name), _max_energy_p(100),
_max_hit_p(100), _energy_p(100), _hit_p(100),  _level(1),  _m_attack_damage(30),
_r_attack_damage(20), _armor_damage_red(5)
{
	std::cout << BOLD << "FragTrap was made and it's called "<< this->_name << FORMAT_RESET << std::endl;
	this->announce();
}

FragTrap::FragTrap(FragTrap const &copy) : _max_energy_p(copy._max_energy_p), _max_hit_p(copy._max_hit_p)
{
	*this = copy;
	std::cout << "FragTrap " << BOLD << this->_name << FORMAT_RESET << " has been copied!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << BOLD << this->_name << FORMAT_RESET << " has been destroyed." << FORMAT_RESET << std::endl;
	if (!(this->_name == "Default_FR4G-TP"))
		std::cout << "R.I.P. " << BOLD << this->_name << FORMAT_RESET << "."  << std::endl;
	else
		std::cout << "He died nameless." << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap & obj)
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

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << ITALIC <<"FR4G-TP " << BOLD << this->_name << FORMAT_RESET << " attacks " << target
		<< " at range, causing " << this->_r_attack_damage
		<< " points of damage!" << FORMAT_RESET << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << ITALIC << "FR4G-TP " << BOLD << this->_name << FORMAT_RESET << " attacks " << target
		<< " at close range, causing " << this->_m_attack_damage
		<< " points of damage!" << FORMAT_RESET << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4G-TP " << BOLD << this->_name <<FORMAT_RESET  << " took " << amount << " damage "
		<< std::endl;
	this->_hit_p = this->_hit_p - (amount - this->_armor_damage_red);
	if (this->_hit_p <= 0)
	{
		std::cout << ITALIC << "FR4G-TP "  << this->_name  << " died." << FORMAT_RESET  << std::endl;
		this->_hit_p = 0;
	}
	this->announce();
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << BOLD << this->_name <<FORMAT_RESET  << " has been repaired with " << amount << " points "
		<< std::endl;
	this->_hit_p = this->_hit_p + amount;
	if (this->_hit_p > this->_max_hit_p)
	{
		std::cout << "Max has been reached!" << std::endl;
		this->_hit_p = this->_max_hit_p;
	}
	announce();
}

void	FragTrap::announce()
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

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int x;
	std::string array[5] = {
		"an attack of pure rage!!!?!",
		"corona.",
		"pure tiredness and stress of having too little blackhole days and too many big projects that I do  not understand pls send help.",
		"trash talk. It's super effective!",
		"bad jokes." };
    x = (rand() % 5);
	this->_energy_p = this->_energy_p - 25;
	if (this->_energy_p < 0)
	{
		announce();
		return ;
	}
	std::cout << target << " is attacked with " << array[x] << std::endl;
	announce();
}

std::string	ft_toupper(std::string str)
{
	for (int x = 0; str[x] != '\0'; x++)
        {
            if (str[x] >= 'a' && str[x] <= 'z')
                str[x] = str[x] - 32;
        }
    return (str);
}