/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 13:16:56 by akramp        #+#    #+#                 */
/*   Updated: 2020/08/01 17:19:20 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

class ZombieEvent
{
    private:
        std::string _name;
        std::string _type;
        std::string _color;
        std::string _message; 

    public:
        ZombieEvent();
        ~ZombieEvent();
        
        Zombie* newZombie(std::string name);
        void setZombieType(std::string input);
        void setZombieColor(std::string input);
        void setZombieMessage(std::string input);
};

#endif
