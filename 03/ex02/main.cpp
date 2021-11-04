/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 13:57:07 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/23 09:31:06 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <unistd.h>

std::string	ft_toupper(std::string str)
{
	for (int x = 0; str[x] != '\0'; x++)
        {
            if (str[x] >= 'a' && str[x] <= 'z')
                str[x] = str[x] - 32;
        }
    return (str);
}

int main( void )
{
	srand( time(NULL) );
	FragTrap frtp;
	FragTrap frtp_1("Matheus");
	FragTrap frtp_2 = frtp_1;
	FragTrap frtp_3("Madelief");
	ScavTrap svtp;
	ScavTrap svtp_1("Jonas");
	ScavTrap svtp_2("Mark");
	ScavTrap svtp_3 = svtp_1;
	ClapTrap cptp;
	ClapTrap cptp_1("Solange");
	ClapTrap cptp_2("Ingmar");

	frtp_1.rangedAttack("Daniël");
	frtp_2.meleeAttack("Jonas");
	frtp_3.takeDamage(66);
	frtp_2.takeDamage(66);
	frtp_3.beRepaired(6);
	frtp_2.beRepaired(6);
	frtp_3.vaulthunter_dot_exe("Boris");
	frtp_3.vaulthunter_dot_exe("Boris");

	svtp_1.rangedAttack("Twinkie");
	svtp_2.meleeAttack("Eva");
	svtp_3.takeDamage(66);
	svtp_2.takeDamage(66);
	svtp_3.beRepaired(6);
	svtp_2.beRepaired(6);
	svtp_3.challengeNewcomer("Angi");
	svtp_3.challengeNewcomer("BlackHole");

	cptp.rangedAttack("Lemao");
	cptp_1.meleeAttack("Alfred");
	cptp.takeDamage(88);
	cptp = cptp_1;
	cptp_1.takeDamage(8);
	cptp.beRepaired(9);
	cptp_2.takeDamage(17);
	cptp_2.beRepaired(17);

	return (0);
}