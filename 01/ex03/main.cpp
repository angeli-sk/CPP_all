/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:49:22 by akramp        #+#    #+#                 */
/*   Updated: 2020/08/04 16:57:16 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <time.h>

int main()
{
    srand( time(NULL) );
    int N = 11;
    ZombieHorde ZH(N);
    ZH.announce();

    return (0);
}