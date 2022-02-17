#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"

class Dog : public Animal
{

public:
	Dog();
	~Dog();
	Dog(Dog const& other);
	Dog &operator=(const Dog &other);

	void		makeSound() const;
};
#endif