/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   CoronaCoughs.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 20:39:24 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/15 19:53:11 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORONACOUGHS_HPP
# define CORONACOUGHS_HPP
# include "AWeapon.hpp"

class CoronaCoughs : public AWeapon
{
	public:
		CoronaCoughs();
		CoronaCoughs(CoronaCoughs const & copy);
		CoronaCoughs & operator = (CoronaCoughs const & copy);
		virtual ~CoronaCoughs();
		void attack() const;
};

#endif
