#ifndef __WrongCat_H__
#define __WrongCat_H__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:
	WrongCat();
	~WrongCat();
	WrongCat(WrongCat const& other);
	WrongCat &operator=(const WrongCat &other);

	void		makeSound() const;
};

#endif // __WrongCat_H__