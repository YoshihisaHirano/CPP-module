#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() 
{
	_name = "unnamed diamond";
	_attackDamage = FragTrap::_attackDamage;
	_energyPoints = ScavTrap::_energyPoints;
	_hitPoints = FragTrap::_hitPoints;
	std::cout << "DiamondTrap default constructor has been called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name), _name(name)
{
	ClapTrap::_name = name.append("_clap_name");
	_attackDamage = FragTrap::_attackDamage;
	_energyPoints = ScavTrap::_energyPoints;
	_hitPoints = FragTrap::_hitPoints;
	std::cout << "DiamondTrap " << this->_name << " has been created." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& other)
{
	_name = other._name;
	_attackDamage = other._attackDamage;
	_energyPoints = other._energyPoints;
	_hitPoints = other._hitPoints;
	ClapTrap::_name = other.ClapTrap::_name;
	std::cout << "DiamondTrap copy constructor has been called." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " has been destroyed." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
	_name = other._name;
	_attackDamage = other._attackDamage;
	_energyPoints = other._energyPoints;
	_hitPoints = other._hitPoints;
	ClapTrap::_name = other.ClapTrap::_name;
	std::cout << "DiamondTrap assignment operator has been called." << std::endl;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "own name: " << _name << ", clapTrap name: " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}