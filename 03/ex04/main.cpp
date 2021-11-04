/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 13:57:07 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/07 11:48:50 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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
	FragTrap frtp_1("Matheus");
	FragTrap frtp_2 = frtp_1;

	ScavTrap svtp_1("Jonas");
	ScavTrap svtp_3 = svtp_1;

	ClapTrap cptp;
	ClapTrap cptp_1("Solange");
	ClapTrap *boii;

	NinjaTrap njtp_2("Boris2");

	SuperTrap super_boi;

	boii = &super_boi;

	boii->rangedAttack("niet jonas");
	frtp_1.rangedAttack("Daniël");
	svtp_1.rangedAttack("Twinkie");

	svtp_3.beRepaired(6);

	svtp_3.challengeNewcomer("Angi");
	svtp_3.challengeNewcomer("BlackHole");

	cptp.takeDamage(88);
	cptp = cptp_1;
	cptp_1.takeDamage(8);
	cptp.beRepaired(9);

	njtp_2.ninjaShoebox(svtp_1);

	super_boi.ninjaShoebox(njtp_2);
	super_boi.vaulthunter_dot_exe("Niet_Jonas");
	super_boi.meleeAttack("Angeli");
	super_boi.rangedAttack("NG");

	return (0);
}