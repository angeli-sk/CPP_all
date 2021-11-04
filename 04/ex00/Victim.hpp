/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 07:52:43 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/03 10:45:57 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <string>

class	Victim
{
	private:
		std::string	_name;
		Victim();
	public:
		Victim(std::string const & name);
		Victim(Victim const & copy);
		Victim & operator = (Victim const & copy);
		virtual ~Victim();
		std::string get_name() const;
		virtual void getPolymorphed() const;
};

	std::ostream & operator << (std::ostream & out, const Victim & obj);

#endif