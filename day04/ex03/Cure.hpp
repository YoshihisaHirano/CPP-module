#ifndef __CURE_H__
#define __CURE_H__
#include "AMateria.hpp"

class Cure : public AMateria
{

public:
	Cure();
	Cure(Cure const & other);
	virtual ~Cure();

	Cure	&operator=(Cure const& other);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};


#endif // __CURE_H__