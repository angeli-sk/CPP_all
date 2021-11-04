
#include "easyfind.hpp"

int main()
{
    std::vector<int> 			container;

    container.push_back(7);
    container.push_back(33);
    container.push_back(7888);
    container.push_back(71);
    container.push_back(2);
    container.push_back(9);

	try
	{
	    std::cout << "easyfind can find num 71: " << std::endl;
	    easyfind(container, 71) ;
	    std::cout << "easyfind cannot find num 6: " << std::endl;
	    easyfind(container, 6) ;
	}
	catch (std::exception& e)
	{
	    std::cout << e.what() << std::endl;
	}
    return (0);
}
