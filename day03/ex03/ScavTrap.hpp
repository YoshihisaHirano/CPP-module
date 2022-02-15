#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

public:
	ScavTrap(std::string name);
	ScavTrap();
	ScavTrap(ScavTrap const& other);
	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &other);

	void	attack(const std::string& target);
	void	guardGate();
};


#endif // __SCAVTRAP_H__