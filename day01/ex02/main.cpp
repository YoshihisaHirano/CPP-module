#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *brainPtr = &brain;
	std::string &brainRef = brain;

	std::cout << std::endl;
	std::cout << &brain << " string address" << std::endl;
	std::cout << &brainPtr << " pointer address" << std::endl;
	std::cout << &brainRef << " refernce address" << std::endl;
	std::cout << std::endl;
	std::cout << brain << " string value" << std::endl;
	std::cout << *brainPtr << " value pointed by brainPtr" << std::endl;
	std::cout << brainRef << " value pointed by brainRef" << std::endl;
	std::cout << std::endl;
	return 0;
}
