/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/10 15:17:08 by akramp        #+#    #+#                 */
/*   Updated: 2020/11/02 16:02:00 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "colors.h"
#include <string>

int main()
{
    srand(time(NULL));
    try
    {
        Bureaucrat bc("Ivy", 149);
        ShrubberyCreationForm lemao("lemae");
        ShrubberyCreationForm lol("lol");
        Form*   rrf;
        Intern ingmar;
        std::cout << COLOR_YELLOW << lemao << std::endl;
        bc.signForm(&lemao);
        bc.executeForm(lemao);
        rrf = ingmar.makeForm("robotomy request form", "Bender");
        lol = lemao;
        std::cout << lemao << " \nALSO: " << lol << std::endl;
        for (int i = 0; i < 140; i++)
        {
            bc.incrementGrade();
        }
        bc.signForm(&lol);
        bc.executeForm(lol);
        std::cout << lemao << " \nALSO: " << lol << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }


        return (0);
}
