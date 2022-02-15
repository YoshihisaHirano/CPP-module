#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
	FragTrap(std::string name);
	FragTrap();
	FragTrap(FragTrap const& other);
	~FragTrap();

	FragTrap &operator=(const FragTrap &other);

	void	highFivesGuys(void);
};
#endif // __FRAGTRAP_H__