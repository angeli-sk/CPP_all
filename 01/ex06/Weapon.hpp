/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 14:07:46 by akramp        #+#    #+#                 */
/*   Updated: 2020/08/04 16:15:48 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>

class Weapon
{
    private:
        std::string _type;

    public:
		Weapon();
        Weapon(std::string weapon);
        ~Weapon();
        void    setType(std::string type);
        const std::string &getType();
};

#endif