/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 19:26:55 by akramp        #+#    #+#                 */
/*   Updated: 2020/11/01 13:59:37 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <exception>

template <class T>
class Array
{
	private:
		T	*_array;
		unsigned int	_size;
	public:
		Array() : _array(NULL), _size(0){}

		Array(unsigned int n) : _array(NULL), _size(n)
		{
			if (n > 0)
				this->_array = new T[n];
		}

		Array(Array const & copy)
		{
			this->_array = NULL;
			this->_size = 0;
			*this = copy;
		}

		Array&	operator=(Array const & copy)
		{
			if (this != &copy)
			{
				this->_size = copy._size;
				delete[] this->_array;
				this->_array = NULL;
				if (this->_size > 0)
				{
					this->_array = new T[this->_size];
					for(unsigned int i =0; i < this->_size; i++)
					{
						this->_array[i] = copy._array[i];
					}
				}
			}
			return *this;
		}

		T&	operator[](unsigned int i) const
		{
			if (i >= this->_size)
				throw std::exception();
			return (this->_array[i]);
		}

		unsigned int size() const
		{
			return(this->_size);
		}

		virtual ~Array()
		{
			delete[] this->_array;
		}
};

#endif
