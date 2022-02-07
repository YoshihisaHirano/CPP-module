#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__
#include <string>

class Zombie
{
private:
	std::string _name;
	
public:
	Zombie();
	~Zombie();
	void	announce( void );
	void	init(std::string name);
};

#endif