/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 19:19:25 by akramp        #+#    #+#                 */
/*   Updated: 2020/08/03 19:32:39 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string &string_ref = string;
    std::string *string_pointer = &string;

    std::cout << string_ref << std::endl;
    std::cout << *string_pointer << std::endl;
    return(0);
}