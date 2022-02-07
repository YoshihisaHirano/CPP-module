#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	std::cout << "A new zombie has been created by dark sorcery" << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " went off to fight the enemies of the Dark Lord" << std::endl;
	return;
}

void Zombie::announce(void) 
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

void Zombie::init(std::string name) 
{
	this->_name = name;
	return;
}
