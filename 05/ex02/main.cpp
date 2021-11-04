/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/10 15:17:08 by akramp        #+#    #+#                 */
/*   Updated: 2020/11/02 16:02:08 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "colors.h"
#include <string>

int main()
{
    srand(time(NULL));
    try
    {
        Bureaucrat bc("Twinkie", 1);
        ShrubberyCreationForm lemao("lemae");
        std::cout << COLOR_ORANGE << lemao << std::endl;
        bc.signForm(&lemao);
        bc.executeForm(lemao);
        std::cout << lemao << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
   try
    {
        Bureaucrat bc("Thijs", 10);
        RobotomyRequestForm lemao("lemae");
        std::cout << COLOR_BLUE << lemao << std::endl;
        bc.executeForm(lemao);
        bc.signForm(&lemao);
        bc.executeForm(lemao);
        std::cout << lemao << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bc("Also_Thijs", 5);
        PresidentialPardonForm lemao("lemae");
        std::cout << COLOR_PINK << lemao << std::endl;
        bc.executeForm(lemao);
        bc.signForm(&lemao);
        bc.executeForm(lemao);
        std::cout << lemao << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
        return (0);
}
