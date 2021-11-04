/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/10 15:17:08 by akramp        #+#    #+#                 */
/*   Updated: 2020/11/02 15:36:27 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include "colors.h"

int main()
{
    try
    {
        Bureaucrat bc("angeli", 151);
        std::cout << COLOR_PURPLE << bc << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << COLOR_GREEN << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bc2("boris", 0);
        std::cout << COLOR_BLUE << bc2 << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << COLOR_PURPLE << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bc3("ingmar", 75);
        std::cout << COLOR_PINK << bc3 << std::endl;
        bc3.incrementGrade();
        std::cout << bc3.getName() << " new garde is " << bc3.getGrade() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bc3("liz", 1);
        std::cout << COLOR_YELLOW << bc3 << std::endl;
        bc3.incrementGrade();
        std::cout << bc3.getGrade() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bc4("Xino", 150);
        std::cout << COLOR_BLUE << bc4 << std::endl;
        bc4.decrementGrade();
        std::cout << bc4.getGrade() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
        return (0);
}
