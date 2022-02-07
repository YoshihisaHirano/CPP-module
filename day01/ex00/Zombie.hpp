#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__
#include <string>

class Zombie
{
private:
	std::string _name;
	
public:
	Zombie(std::string name);
	~Zombie();
	void	announce( void ); 
};

#endif