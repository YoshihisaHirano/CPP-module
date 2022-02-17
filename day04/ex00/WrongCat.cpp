#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor is called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor is called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& other)
{
	std::cout << "WrongCat copy constructor is called" << std::endl;
	type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat assignment operator is called" << std::endl;
	type = other.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "meow!" << std::endl;
}
