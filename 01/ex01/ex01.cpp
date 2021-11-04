/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 13:10:11 by akramp        #+#    #+#                 */
/*   Updated: 2020/08/01 13:13:54 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    memoryLeak()
{
    std::string*panther = new std::string("String panther");

    std::cout << *panther << std::endl;
    delete panther;
}

int main(void)
{
//    std::string leaks;

    memoryLeak();

    // while (1)
    // {
    //     std::getline(std::cin, leaks);
    //     if (leaks == "EXIT")
    //         std::exit(0);
    // }
    // return (0);
}
