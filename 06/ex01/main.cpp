/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/21 10:43:23 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/21 10:48:41 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>
#include <iostream>

struct Data
{
    std::string s1;
    int n;
    std::string s2;
 };

Data * deserialize(void * raw)
{
   Data *dta = new Data;
   char *s = reinterpret_cast<char *>(raw);
   int *i;
   for (int i = 0; i < 8; i++)
       dta->s1 += s[i];
   for (int i = 12; i  < 20; i++)
       dta->s2 += s[i];
   i = reinterpret_cast<int*>(s + 8);
   dta->n = *i;
   return (dta);
}

int     alphanum_randomizer()
{
    int     i = rand() % 3;
    if (i == 0)
        return ((rand() % 26 ) + 65);
    else if (i == 1)
        return ((rand() % 26 ) + 97);
    else
        return ((rand() % 10 ) + 48);
    return (1);
}

void * serialize(void)
{
    srand( time(NULL) );
    char *c = new char[20];
    int *location = reinterpret_cast<int*>(&c[8]);
    for (int i = 0; i < 8; i++)
        c[i] = alphanum_randomizer();
    *location = rand();
    for (int i = 12; i < 20; i++)
        c[i] = alphanum_randomizer();
    return (reinterpret_cast<void*>(c));
}

int main()
{
    Data *data;
    void *adr;
    adr = serialize();
    data = deserialize(adr);
    std::cout << data->s1 << std::endl;
    std::cout << data->s2 << std::endl;
    std::cout << data->n << std::endl;
    delete (data);
    delete [] (reinterpret_cast<char *>(adr));
    return (0);
}
