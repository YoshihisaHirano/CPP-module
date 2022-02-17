#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat constructor is called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor is called" << std::endl;
}

Cat::Cat(Cat const& other)
{
	std::cout << "Cat copy constructor is called" << std::endl;
	type = other.type;
	*brain = *other.brain;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment operator is called" << std::endl;
	type = other.type;
	*brain = *other.brain;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "meow!" << std::endl;
}
