#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class Cat : public Animal
{

public:
	Cat();
	~Cat();
	Cat(Cat const& other);
	Cat &operator=(const Cat &other);

	void		makeSound() const;
};

#endif // __CAT_H__