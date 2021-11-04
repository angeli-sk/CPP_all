/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/10 15:17:08 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/11 20:20:52 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "colors.h"
#include <string>

int main()
{
    try
    {
        Bureaucrat bc("Oscar", 40);
        Form formsie("ReForm", 80, 30);
        std::cout << COLOR_ORANGE << formsie << std::endl;
        bc.signForm(&formsie);
        std::cout << formsie << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bc("Ivy", 5);
        Form formsie("Corona", 10, 30);
        std::cout << COLOR_PURPLE << formsie << std::endl;
        bc.signForm(&formsie);
        std::cout << formsie << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bc("Jonas", 20);
        Form formsie("Final", 10, 30);
        std::cout << COLOR_BLUE << formsie << std::endl;
        bc.signForm(&formsie);
        std::cout << formsie << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
