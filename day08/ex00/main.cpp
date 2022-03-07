#include "easyfind.h"
#include <vector>
#include <list>
#include <iostream>

int main()
{
	{
		std::vector<int> vect;
		vect.push_back(10);
    	vect.push_back(20);
    	vect.push_back(30);

		std::cout << *easyfind(vect, 10) << std::endl;
		std::cout << *easyfind(vect, 20) << std::endl;
	try
	{
		std::cout << *easyfind(vect, 0) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	}
	{
		std::list<int> lst;

		lst.push_back(70);
    	lst.push_back(90);
    	lst.push_back(40);

		std::cout << *easyfind(lst, 90) << std::endl;
		std::cout << *easyfind(lst, 40) << std::endl;
		try
		{
			std::cout << *easyfind(lst, 0) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	return 0;
}
