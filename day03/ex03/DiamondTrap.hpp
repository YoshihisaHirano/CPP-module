#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	_name;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const& other);
	~DiamondTrap();

	DiamondTrap &operator=(const DiamondTrap &other);

	void	whoAmI();
	void 	attack(const std::string& target);
};

#endif // __DIAMONDTRAP_H__