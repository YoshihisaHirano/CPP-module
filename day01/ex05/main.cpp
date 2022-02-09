#include "Karen.hpp"
#include <iostream>

int main()
{
	Karen	karen;

	karen.complain("debug");
	std::cout << "This is the debug level." << std::endl;
	std::cout << std::endl;

	karen.complain("info");
	std::cout << "This is the info level." << std::endl;
	std::cout << std::endl;

	karen.complain("warning");
	std::cout << "This is the warning level." << std::endl;
	std::cout << std::endl;

	karen.complain("error");
	std::cout << "This is the error level." << std::endl;
	std::cout << std::endl;

	karen.complain("manager");
	std::cout << "This is a wrong argument" << std::endl;
	return 0;
}
