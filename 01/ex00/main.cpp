/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 13:09:57 by akramp        #+#    #+#                 */
/*   Updated: 2020/08/03 19:49:11 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
# include <iostream>

void    ponyOnTheHeap(void)
{
    std::cout << "\033[37mYou've created a \033[38;5;222mheap\033[37m pony, take good care of it !!" << std::endl;
    std::cout << "\033[38;5;222m";
    Pony *Heapy = new Pony;
    delete Heapy;
}

void    ponyOnTheStack(void)
{
    std::cout << "\033[37mYou've created a \033[38;5;117mstack\033[37m pony, take good care of it !!" << std::endl;
    std::cout << "\033[38;5;117m";
    Pony Stacky;
}

int main(void)
{
   // std::string leaks;

    ponyOnTheHeap();
    ponyOnTheStack();

    // while (1)
    // {
    //     std::getline(std::cin, leaks);
    //     if (leaks == "EXIT")
    //         std::exit(0);
    // }
    return (0);
}
