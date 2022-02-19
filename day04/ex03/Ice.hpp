#ifndef __ICE_H__
#define __ICE_H__

#include "AMateria.hpp"

class Ice : public AMateria
{

public:
	Ice();
	Ice(Ice const & other);
	virtual ~Ice();

	Ice	&operator=(Ice const& other);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif // __ICE_H__