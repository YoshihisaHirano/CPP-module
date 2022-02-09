#ifndef __HUMAN_B_H__
#define __HUMAN_B_H__
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon 		*_weapon;

public:
	HumanB(std::string	name);
	~HumanB();

	void	setWeapon(Weapon &weapon);
	void	attack() const;
};

#endif