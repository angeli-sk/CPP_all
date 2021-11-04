/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lemao.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 19:23:28 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/15 19:27:25 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMAO_HPP
# define LEMAO_HPP
# include "Victim.hpp"

	class Lemao :  public Victim
	{
		private:
			Lemao();
		public:
			Lemao(std::string const & name);
			virtual ~Lemao();
			Lemao(Lemao const & copy);
			Lemao & operator = (Lemao const & copy);
			void getPolymorphed() const;
	};

#endif
