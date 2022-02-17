#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <string>

class Animal
{
protected:
	std::string	type;

public:
	Animal();
	virtual ~Animal();
	Animal(Animal const& other);
	Animal &operator=(const Animal &other);

	virtual void	makeSound() const;
	std::string		getType() const;
};


#endif // __ANIMAL_H__