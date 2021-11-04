/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 19:33:34 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/24 18:57:06 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
	Array <int>A(6);
	Array <char>C(50);
	Array <int>B;
	A[5] = 17;
	C[49] = 'C';

	std::cout << A[5] << " & " << C[49] << " ;size A= " << A.size() << " & C="
		<< C.size() << " & B=" << B.size()  << std::endl;
	return (0);
}
