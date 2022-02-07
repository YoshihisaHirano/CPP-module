#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _name(name) 
{
	return;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
	return;
}

void Zombie::announce(void) 
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
