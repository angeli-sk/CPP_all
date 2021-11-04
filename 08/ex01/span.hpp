/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 11:21:04 by akramp        #+#    #+#                 */
/*   Updated: 2020/11/01 16:59:36 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>

class	Span
{
	private:
		unsigned int	const _N;
		std::vector<int> _nums;
	public:
		class	MyException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "No space amigo. Try again. >:0";
				}
		};

		class	NoSpanToFind : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "No span to find amigo. Trrrrry again. >:0";
				}
		};
		Span();
		Span(unsigned int N);
		Span(Span const & copy);
		Span & operator = (Span const & copy);
		~Span();
		void addNumber(int N);
		template <class InputIterator>
		void addNumber(InputIterator first, InputIterator last)
		{
			if (this->_nums.size() + std::distance(first, last) > this->_N)
				throw MyException();
			this->_nums.insert(this->_nums.end(), first, last);
		}
		unsigned int shortestSpan();
		unsigned int longestSpan() const;


};
