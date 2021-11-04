/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:49:11 by akramp        #+#    #+#                 */
/*   Updated: 2020/08/03 16:49:47 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde
{
    private:
        int  _N;
        Zombie *_Horde;
        
    public:
        ZombieHorde(int N);
        ~ZombieHorde();
        Zombie* createHorde();
        void    announce();
};

#endif
