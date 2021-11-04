/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 13:57:07 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/22 07:47:44 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <unistd.h>

int main( void )
{
	srand( time(NULL) );
	FragTrap frtp;
	FragTrap frtp_1("Matheus");
	FragTrap frtp_2 = frtp_1;
	FragTrap frtp_3("Madelief");


	frtp_1.rangedAttack("Daniël");
	frtp_2.meleeAttack("Jonas");
	frtp_3.takeDamage(66);
	frtp_2 = frtp_3;
	frtp_2.takeDamage(66);
	frtp_3.beRepaired(6);
	frtp_2.beRepaired(6);
	frtp_3.vaulthunter_dot_exe("Boris");
	frtp_3.vaulthunter_dot_exe("Boris");
	return (0);
}