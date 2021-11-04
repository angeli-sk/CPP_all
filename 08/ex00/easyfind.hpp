#ifndef EASYFIND_H
# define EASYFIND_H
# include <iostream>
# include <vector>

class myexception: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Cannot find number!";
  }
};

template <typename T>
void    easyfind(T container, int to_find)
{
    typename T::iterator i;

    i = find(container.begin(), container.end(), to_find);
    if (i == container.end())
        throw myexception();

    std::cout << "num = " << *i << std::endl;
}

#endif
