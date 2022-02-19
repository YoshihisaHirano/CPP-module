#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria()
{
	type = "abstract materia";
	std::cout << type << " default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << type << " parameterized constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & other)
{
	type = other.type;
	std::cout << type << " copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << type << " destructor called" << std::endl;
}

AMateria& AMateria::operator=(AMateria const & other)
{
	type = other.type;
	std::cout << type << " assignment operator called" << std::endl;
	return *this;
}

std::string const& AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	return;
}

