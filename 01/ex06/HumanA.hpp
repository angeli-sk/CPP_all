/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 14:08:09 by akramp        #+#    #+#                 */
/*   Updated: 2020/08/04 16:21:13 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <string>

class HumanA
{
    private:
        std::string _nameA;
        Weapon &_weaponA;
        
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack();
        void setWeapon(Weapon &weapon);
};

#endif