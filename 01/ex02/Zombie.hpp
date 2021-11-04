/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 13:16:29 by akramp        #+#    #+#                 */
/*   Updated: 2020/08/03 19:47:46 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
    private:
        std::string _name;
        std::string _type;
        std::string _color;
        std::string _message;
    
    public:
        Zombie(std::string name, std::string type, std::string color, std::string _message);
        ~Zombie();
        void    announce(void) const;
};

#endif