/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:48:45 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/12 20:58:14 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <unistd.h>
#include <iostream>

Zombie::Zombie()
{
    this->_name = this->random_name();
    this->_color = this->random_color();
    return;
}

Zombie::~Zombie()
{
    return;
}

std::string Zombie::random_name(void) const
{
    int x;
    x = (rand() % 20);
    switch (x)
    {
        case 0 :
            return ("Tessa");
        case 1 :
            return ("Jelle");
        case 2 :
            return ("Liz");
        case 3 :
            return ("Wout");
        case 4 :
            return ("Imre");
        case 5 :
            return ("Oscar");
        case 6 :
            return ("Jessie");
        case 7 :
            return ("Lindsay");
        case 8 :
            return ("Turlough");
        case 9 :
            return ("Peer");
        case 10:
            return ("Xino");
        case 11:
            return ("Zeno");
        case 12:
            return ("Nikki");
        case 13:
            return ("Boris");
        case 14:
            return ("Thijs");
        case 15:
            return ("Ingmar");
        case 16:
            return ("Michelle");
        case 17:
            return ("Anna");
        case 18:
            return ("Daphne");
		case 19:
            return ("Jonas");
        default :
            return ("Zombers the first");
    }
}

std::string Zombie::random_color(void) const
{
    int x;
    x = (rand() % 10);
    switch (x)
    {
        case 0 :
            return ("\033[38;5;114m");
        case 1 :
            return ("\033[38;5;196m");
        case 2 :
            return ("\033[38;5;220m");
        case 3 :
            return ("\033[38;5;51m");
        case 4 :
            return ("\033[38;5;91m");
        case 5 :
            return ("\033[38;5;208m");
        case 6 :
            return ("\033[38;5;206m");
        case 7 :
            return ("\033[38;5;33m");
        case 8 :
            return ("\033[38;5;21m");
        case 9 :
            return ("\033[38;5;42m");
        default :
            return ("\033[38;5;114m");
    }
}

void    Zombie::announce(void) const
{
    std::string boiiis[] = {" o \n/|\\\n/ \\\n","\\ o /\n  |  \n / \\ \n"," _ o\n /\\\n| \\\n","\n ___\\o\n/)  | \n"," __|  \n  \\o \n  ( \\\n","\\ /\n | \n/o\\\n","   |__\n o/   \n/ )  \n","\n o/__ \n |  (\\\n"," o _\n /\\ \n / |\n","\\ o / \n  |   \n / \\  \n","  o\n /|\\\n / \\\n"};

    for (int i = 0; i < 11; i++)
    {
        system ("clear");
        std::cout << "<" << this->_name << "> " << "\n" << this->_color << std::endl;
        std::cout << boiiis[i];
        std::cout << "\e[0m";
        usleep (150000);
    }
}