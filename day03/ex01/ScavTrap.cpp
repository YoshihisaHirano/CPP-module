#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Default ScavTrap constructor has been called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " has been created." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "ScavTrap copy constructor has been called." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " has been destroyed." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "ScavTrap assignment operator has been called." << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target <<
		" causing " << _attackDamage << " points of damage." << std::endl;
		_energyPoints--;
		return;
	}
	std::cout << "ScavTrap " << _name << " is out of energy or dead and cannot attack." << std::endl;
}

void ScavTrap::guardGate()
{
	if (_hitPoints && _energyPoints)
	{
		std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " cannot guard 'cause it's dead." << std::endl;
}