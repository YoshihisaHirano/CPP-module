#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__
#include <string>

class ClapTrap
{
protected:
	std::string	_name;
	int			_hitPoints ;
	int			_energyPoints;
	int			_attackDamage;

public:
	ClapTrap(std::string name);
	ClapTrap();
	ClapTrap(ClapTrap const& other);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &other);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	showStats(void);
};
#endif // __CLAPTRAP_H__