/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 13:16:17 by akramp        #+#    #+#                 */
/*   Updated: 2020/08/03 19:46:58 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <unistd.h>

Zombie::Zombie(std::string name, std::string type, std::string color, std::string message)
{
    this->_name = name;
    this->_type = type;
    this->_color = color;
    this->_message = message;
    return;
}

Zombie::~Zombie(void)
{
    return;
}

void    Zombie::announce(void) const
{
    std::string boiiis[] = {" o \n/|\\\n/ \\\n","\\ o /\n  |  \n / \\ \n"," _ o\n /\\\n| \\\n","\n ___\\o\n/)  | \n"," __|  \n  \\o \n  ( \\\n","\\ /\n | \n/o\\\n","   |__\n o/   \n/ )  \n","\n o/__ \n |  (\\\n"," o _\n /\\ \n / |\n","\\ o / \n  |   \n / \\  \n","  o\n /|\\\n / \\\n"};
    
    for (int i = 0; i < 11; i++)
    {
        system ("clear");
        std::cout << "<" << this->_name << " (" << this->_type << ")> " << this->_message << "\n" << this->_color << std::endl;
        std::cout << boiiis[i];
        std::cout << "\e[0m";
        usleep (150000);
    }
}