/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 09:59:34 by akramp        #+#    #+#                 */
/*   Updated: 2020/07/27 16:59:17 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
         std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int y = 1; y < argc; y++)
    {
        for (int x = 0; argv[y][x] != '\0'; x++)
        {
            if (argv[y][x] >= 'a' && argv[y][x] <= 'z')
                argv[y][x] = argv[y][x] - 32;
        }
        std::cout << argv[y];
    }
    std::cout << std::endl;
    return 0;
}
