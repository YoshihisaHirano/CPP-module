#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materias[i] = nullptr;
	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const& other)
{
	for (int i = 0; i < 4; i++)
		materias[i] = other.materias[i];
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete materias[i];
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& other)
{
	for (int i = 0; i < 4; i++)
		materias[i] = other.materias[i];
	std::cout << "MateriaSource assignment operator called" << std::endl;
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!materias[i])
		{
			materias[i] = materia->clone();
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] && materias[i]->getType() == type)
			return materias[i]->clone();
	}
	return 0;
}
