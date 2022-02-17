#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor is called" << std::endl;
	type = "";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& other)
{
	std::cout << "WrongAnimal copy constructor is called" << std::endl;
	type = other.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal assignment operator is called" << std::endl;
	type = other.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "~so~wroong~" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}