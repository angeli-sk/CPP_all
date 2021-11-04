/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:48:54 by akramp        #+#    #+#                 */
/*   Updated: 2020/08/03 19:45:26 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
    private:
        std::string _name;
        std::string _color;
        
    public:
        Zombie();
        ~Zombie();
        std::string    random_name(void) const;
        std::string    random_color(void) const;
        void announce(void) const;
};

#endif