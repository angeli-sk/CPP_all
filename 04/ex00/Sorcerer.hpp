/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 07:52:35 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/03 10:46:04 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <string>
# include "Victim.hpp"

class	Sorcerer
{
	private:
		std::string _name;
		std::string _title;
		Sorcerer();
	public:
		Sorcerer(std::string const & name, std::string const & title);
		Sorcerer(Sorcerer const & copy);
		Sorcerer & operator = (Sorcerer const & copy);
		virtual ~Sorcerer();
		std::string get(int i) const;
		void polymorph(Victim const &) const;
};

	std::ostream & operator << (std::ostream & out, const Sorcerer & obj);

#endif