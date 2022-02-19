#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
	
}

Ice::Ice(Ice const & other) : AMateria(other.getType())
{
	
}

Ice::~Ice()
{
	
}

Ice& Ice::operator=(Ice const&)
{
	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
