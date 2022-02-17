#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "Animal constructor is called" << std::endl;
	type = "";
}

Animal::~Animal()
{
	std::cout << "Animal destructor is called" << std::endl;
}

Animal::Animal(Animal const& other)
{
	std::cout << "Animal copy constructor is called" << std::endl;
	type = other.type;
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignment operator is called" << std::endl;
	type = other.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "~~~" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}