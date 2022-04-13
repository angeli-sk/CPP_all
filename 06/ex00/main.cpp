/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 11:45:55 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/17 18:50:50 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include "except.hpp"

int		DoubleToInt(double value)
{
	if (value > std::numeric_limits<int>::max() ||
		value < std::numeric_limits<int>::min())
		throw IntException();
	return (static_cast<int>(value));
}

char	DoubleToChar(double value)
{
	if (value > std::numeric_limits<char>::max() ||
		value < std::numeric_limits<char>::min())
		throw CharException();
	if (!(std::isprint(value)))
		throw CharException();
	return (static_cast<char>(value));
}

float	DoubleToFloat(double value)
{
	if (value > std::numeric_limits<float>::max())
		throw FloatTooHighException();
	if (value < (std::numeric_limits<float>::max() * -1))
		throw FloatTooLowException();
	return (static_cast<float>(value));
}

double	DoubleCheck(double value)
{
	if (value > std::numeric_limits<double>::max())
		throw DoubleTooHighException();
	if (value < (std::numeric_limits<double>::max() * -1))
		throw DoubleTooLowException();
	return (value);
}

void	input_checker(std::string s)
{
	if (s.find_first_not_of("0123456789-.f") != std::string::npos)
		throw NanException();
	int count = 0;
	for (size_t i = 0; (i = s.find('-', i)) != std::string::npos; i++)
		count++;
	if (count > 1)
		throw NanException();
	count = 0;
	for (size_t i = 0; (i = s.find('.', i)) != std::string::npos; i++) 
		count++;
	if (count > 1)
		throw NanException();
	count = 0;
	for (size_t i = 0; (i = s.find('f', i)) != std::string::npos; i++) 
		count++;
	if (count > 1)
		throw NanException();
	if (s.find_first_not_of("-.f") == std::string::npos)
		throw NanException();
}

int		main(int argc, char **argv)
{
	double w = 0.0;
	int i = 0;
	char c = 0;
	float f = 0;
	std::string s;
	extern int errno;
	char *endptr;
	errno = 0;

	if (argc != 2)
	{
		std::cout << "Wrong amount of args yo... :0" << std::endl;
		return (1);
	}
	s = argv[1];
	w = strtod(s.c_str(), &endptr);
	if (errno != 0)
		return (false);
	 std::cout.precision(1);

//✧･ﾟ: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ *✧･ﾟ:* NAN ✧*:･ﾟ✧: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ﾟ: *✧･ﾟ:
		try
		{
				input_checker(s);
		}
		catch(std::exception& e)
    	{
    	    std::cout << e.what() << std::endl;
			return (1);
    	}
//✧･ﾟ: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ *✧･ﾟ:* CHAR ✧*:･ﾟ✧: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ﾟ: *✧･ﾟ:
		try
		{
			c = DoubleToChar(w);
			std::cout << "char: " << c << std::endl;
		}
		catch(std::exception& e)
    	{
    	    std::cout << e.what() << std::endl;
    	}
//✧･ﾟ: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ *✧･ﾟ:* INT ✧*:･ﾟ✧: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ﾟ: *✧･ﾟ:
		try
		{
			i = DoubleToInt(w);
			std::cout << "int: " << i << std::endl;
		}
		catch(std::exception& e)
    	{
    	    std::cout << e.what() << std::endl;
    	}
//✧･ﾟ: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ *✧･ﾟ:* DOUBLE✧*:･ﾟ✧: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ﾟ: *✧･ﾟ:
		try
		{
			w = DoubleCheck(w);
			std::cout << "double: " << std::fixed << w	<< std::endl;
		}
		catch(std::exception& e)
    	{
    	    std::cout << e.what() << std::endl;
    	}
//✧･ﾟ: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ *✧･ﾟ:* FLOAT ✧*:･ﾟ✧: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ﾟ: *✧･ﾟ:
		try
		{
			f = DoubleToFloat(w);
			std::cout << "float: "  <<  std::fixed << f << "f" << std::endl;
		}
		catch(std::exception& e)
    	{
    	    std::cout << e.what() << std::endl;
    	}

	return (0);
}
