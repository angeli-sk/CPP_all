/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 17:36:23 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/20 14:09:28 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int		_fpv;
		static const int nfb = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &obj);
		Fixed(const int fix);
		Fixed(const float fix);
		float toFloat( void ) const;
		int	toInt( void ) const;
		Fixed &operator = (const Fixed &obj);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream& operator << (std::ostream &out, const Fixed &obj);

#endif