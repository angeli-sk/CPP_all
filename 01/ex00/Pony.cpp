/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 13:09:07 by akramp        #+#    #+#                 */
/*   Updated: 2020/08/03 19:48:59 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(void)
{
    std::cout << "        ,--,\n";
    std::cout << "  _ ___/ /\\|\n";
    std::cout << " ;( )__, )\n";
    std::cout << "; //   '--;\n";
    std::cout << "  \\     |\n";
    std::cout << "   ^    ^" << std::endl;
    return;
}

Pony::~Pony(void)
{
    std::cout << "\033[37mYou killed the pony, wow uhh okay then ..." << std::endl;
    return;
}
