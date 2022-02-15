#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap " << this->_name << " has been created." << std::endl;
}

ClapTrap::ClapTrap()
{
	this->_name = "unnamed";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "Default ClapTrap constructor has been called." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& other)
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << "ClapTrap copy constructor has been called." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " has been destroyed." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << "ClapTrap assignment operator has been called." << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target <<
		" causing " << this->_attackDamage << " points of damage." << std::endl;
		this->_energyPoints--;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " is out of energy or dead and cannot attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " loses " << amount << " points."<< std::endl;
		this->_hitPoints -= amount;
		if (this->_hitPoints < 0)
			this->_hitPoints = 0;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " cannot take any more damage 'cause it's dead." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints)
	{
		std::cout << "ClapTrap " << this->_name << " gets " << amount << " hit points back"<< std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " is out of energy or dead and cannot be repaired." << std::endl;
}

void ClapTrap::showStats(void)
{
	std::cout << "name: " << this->_name << ", " <<
	"energy: " << this->_energyPoints << ", " <<
	"hit points: " << this->_hitPoints << ", " <<
	"damage: " << this->_attackDamage << std::endl;

}
