#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*materias[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource const& other);
	~MateriaSource();
	
	MateriaSource& operator=(MateriaSource const& other);

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif // __MATERIASOURCE_H__