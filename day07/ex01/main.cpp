#include <iostream>
#include <string>
#include "iter.h"

int main(){
	{
		int a[5] = {1, 2, 3, 4, 5};
		
		iter(a, 5, printFunc);
		std::cout << std::endl;

		iter(a, 5, printAddress);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	{
		double g[4] = {0.89, 1.4657, 43.23, 8689.09};
		
		iter(g, 4, printFunc);
		std::cout << std::endl;

		iter(g, 4, printAddress);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	{
		std::string g[4] = {"hello", "big", "cruel", "world"};
		
		iter(g, 4, printFunc);
		std::cout << std::endl;

		iter(g, 4, printAddress);
		std::cout << std::endl;
	}
	return 0;
}