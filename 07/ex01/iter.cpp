/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 16:32:36 by akramp        #+#    #+#                 */
/*   Updated: 2020/11/01 13:27:39 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void	iter(T *array, std::size_t const &length, void (*function)(const T&))
{
	for (std::size_t i = 0; i < length; i++)
		function(array[i]);
}

template <typename T>
void 	echo(T array)
{
	std::cout << array << " It workie!!" << std::endl;
}

int main()
{
	std::string lemao[] = {"ololol", "popopop"};
	int int_lemao[] = {5, 66, 8888};

	iter(lemao, 2, echo);
	iter(int_lemao, 3, echo);
	return (0);
}
