#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(Cure const & other) : AMateria(other.getType())
{
	
}

Cure::~Cure()
{

}

Cure& Cure::operator=(Cure const&)
{
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
