#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor is called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor is called" << std::endl;
}

Cat::Cat(Cat const& other)
{
	std::cout << "Cat copy constructor is called" << std::endl;
	type = other.type;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment operator is called" << std::endl;
	type = other.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "meow!" << std::endl;
}
