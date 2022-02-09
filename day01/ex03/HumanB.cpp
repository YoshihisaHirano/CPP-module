#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string	name) : _name(name)
{
	this->_weapon = NULL;
	return;
}

HumanB::~HumanB()
{
	return;
}

void HumanB::setWeapon(Weapon &weapon) 
{
	this->_weapon = &weapon;
	return;
}

void HumanB::attack() const
{
	if (this->_weapon) {
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	} else {
		std::cout << this->_name << " attacks with their bare hands" <<  std::endl;
	}
	return;
}

