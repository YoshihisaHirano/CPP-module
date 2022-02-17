#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor is called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor is called" << std::endl;
}

Dog::Dog(Dog const& other)
{
	std::cout << "Dog copy constructor is called" << std::endl;
	type = other.type;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog assignment operator is called" << std::endl;
	type = other.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "woof!" << std::endl;
}
