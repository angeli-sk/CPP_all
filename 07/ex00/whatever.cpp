/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 13:05:26 by akramp        #+#    #+#                 */
/*   Updated: 2020/11/01 13:23:30 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T c = a;
	a = b;
	b = c;
}

template <typename T>
T min(T const &a, T const &b)
{
	if (a >= b)
		return (b);
	else
		return (a);
}

template <typename T>
T max(T const &a, T const &b)
{
	if (a <= b)
		return (b);
	else
		return (a);
}

class lemao
{
	public:
		lemao( int n): _n(n) {}
		int	get() const { return this->_n; }
	private:
		int _n;
};

int		main()
{
	int a = 7;
	int b = 2;
	char A = 'A';
	char B = 'B';
	double d = 8888888;
	double dd = 7777777777;
	lemao lol(4);
	lemao lol2(9);

	std::cout << "int a = " << a << std::endl;
	std::cout << "int b = " << b << std::endl;
	std::cout << "char A = " << A << std::endl;
	std::cout << "char B = " << B << std::endl;
	std::cout<< "class int n =  " << lol.get() << std::endl;
	std::cout<< "class int n2 =  " << lol2.get() << std::endl;

	::swap(A, B);
	::swap(a, b);
	::swap(lol, lol2);
	std::cout << "\nAfter swap: " << std::endl;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "A = " << A << std::endl;
	std::cout << "B = " << B << std::endl;
	std::cout<< "class int n =  " << lol.get() << std::endl;
	std::cout<< "class int n2 =  " << lol2.get() << std::endl;

	std::cout << "\nMin be like: " << ::min(a, b) << std::endl;
	std::cout << "\nMax be like: " << ::max(a, b) << std::endl;
	std::cout << "\nMin of double " << d << " & " << dd << " be like: " << ::min(d, dd) << std::endl;
	std::cout << "\nMax of double " << d << " & " << dd << " be like: " << ::max(d, dd) << std::endl;

	return (0);
}
