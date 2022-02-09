#ifndef __WEAPON_H__
#define __WEAPON_H__
#include <string>

class Weapon
{
private:
	std::string _type;
	
public:
	Weapon(std::string type);
	~Weapon();

	std::string const &getType() const;
	void	setType(std::string type);
};

#endif
