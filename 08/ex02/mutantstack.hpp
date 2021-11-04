/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: angeli <angeli@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 19:15:39 by angeli        #+#    #+#                 */
/*   Updated: 2020/11/01 17:31:41 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
#include <stack>
# include <iterator>
template <typename T, class container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
    private:

    public:
        MutantStack() : std::stack<T, container>() {}
        MutantStack(std::stack<T, container> const & copy) : std::stack<T, container>(copy)  {}
        MutantStack(MutantStack const & copy) : std::stack<T, container>(copy) {}
        ~MutantStack() {}
        using std::stack<T, container>::operator=;
        typedef typename container::iterator iterator;
        iterator			begin(void) {return (this->c.begin());}
        iterator			end(void) {return (this->c.end());}
};

#endif
