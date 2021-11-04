/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 13:32:25 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/12 20:55:32 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <time.h>

std::string randomName()
{
    int x;
    x = (rand() % 16);
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
            return ("Ingmar");
        case 13:
            return ("Boris");
        case 14:
            return ("Ivy");
		case 15:
            return ("Jonas");
        default :
            return ("Zombers the first");
    }
}

std::string randomType()
{
    int x;
    x = (rand() % 10);
    switch (x)
    {
        case 0 :
            return ("Lazy");
        case 1 :
            return ("Cool");
        case 2 :
            return ("Sick");
        case 3 :
            return ("Epic");
        case 4 :
            return ("Sleepy");
        case 5 :
            return ("Depressed");
        case 6 :
            return ("Anxious");
        case 7 :
            return ("Fast");
        case 8 :
            return ("Hungry");
        case 9 :
            return ("Lovely");
        default :
            return ("Dead");
    }
}

std::string randomColor()
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

std::string randomMessage()
{
    int x;
    x = (rand() % 10);
    switch (x)
    {
        case 0 :
            return ("Yo");
        case 1 :
            return ("Lemao");
        case 2 :
            return ("Help");
        case 3 :
            return ("I'm tired");
        case 4 :
            return ("Hellooo0o0");
        case 5 :
            return ("What's up");
        case 6 :
            return ("I'm dead in AND outside");
        case 7 :
            return ("Skrrt skrrt");
        case 8 :
            return ("Beep boop");
        case 9 :
            return ("How are you?");
        default :
            return ("BLurrrrp");
    }
}

void    randomChump()
{
    srand( time(NULL) );
    ZombieEvent ZE;
    Zombie *Z;
    ZE.setZombieType(randomType());
    ZE.setZombieColor(randomColor());
    ZE.setZombieMessage(randomMessage());
    Z = ZE.newZombie(randomName());
    Z->announce();
    delete Z;
}

int main()
{
    randomChump();
    return (0);
}
