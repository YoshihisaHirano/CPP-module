#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
	std::string	type;

	public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const & other);
	virtual ~AMateria();
	AMateria &operator=(AMateria const & other);
	

	std::string const &getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
#endif // __AMATERIA_H__