#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "type: " << j->getType() << " " << std::endl;
	std::cout << "type: " << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	const WrongAnimal* meta_wrong = new WrongAnimal();
	const WrongAnimal* wrong_kitty = new WrongCat();
	std::cout << "type: " << wrong_kitty->getType() << " " << std::endl;
	wrong_kitty->makeSound();
	meta_wrong->makeSound();

	delete meta_wrong;
	delete wrong_kitty;

	return (0);
}
