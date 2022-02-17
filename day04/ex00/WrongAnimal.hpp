#ifndef __WrongAnimal_H__
#define __WrongAnimal_H__

#include <string>

class WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(WrongAnimal const& other);
	WrongAnimal &operator=(const WrongAnimal &other);

	void	makeSound() const;
	std::string		getType() const;
};


#endif // __WrongAnimal_H__