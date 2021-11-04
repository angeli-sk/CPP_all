/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 19:36:24 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/12 21:27:30 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human
{
    private:
        const Brain _smort;

    public:
        Human();
        ~Human();
        std::string identify() const;
        const Brain &getBrain();
};

#endif