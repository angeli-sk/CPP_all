/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 07:52:26 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/15 19:29:50 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

	class Peon :  public Victim
	{
		private:
			Peon();
		public:
			Peon(std::string const & name);
			virtual ~Peon();
			Peon(Peon const & copy);
			Peon & operator = (Peon const & copy);
			void getPolymorphed() const;
	};

#endif
