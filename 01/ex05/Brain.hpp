/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 19:36:05 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/12 21:28:37 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class   Brain
{
    private:
        std::string _brain_img;

    public:
        Brain();
        ~Brain();
        std::string     get_brain_img() const;
        std::string		identify() const;
};

#endif