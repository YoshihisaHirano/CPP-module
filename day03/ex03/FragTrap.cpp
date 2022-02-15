#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Default FragTrap constructor has been called." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " has been created." << std::endl;
}

FragTrap::FragTrap(FragTrap const& other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "FragTrap copy constructor has been called." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " has been destroyed." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "FragTrap assignment operator has been called." << std::endl;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	if (_hitPoints && _energyPoints)
	{
		std::cout << "Hey, gimme a high five, dude!" << std::endl;
		return;
	}
	std::cout << "Dead robots don't give high fives :(" << std::endl;
}
