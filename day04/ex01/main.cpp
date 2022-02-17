#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
	Animal	*animals[100];

	for (int i = 0; i < 100; i++)
	{
		std::cout << "================" << std::endl;
		if (i % 2) {
			animals[i] = new Cat();
		} else {
			animals[i] = new Dog();
		}
		std::cout << "================" << std::endl;
	}

	for (int i = 0; i < 100; i++) 
	{ 
		std::cout << "================" << std::endl;
		delete animals[i];
		std::cout << "================" << std::endl;
	}
	return 0;
}
