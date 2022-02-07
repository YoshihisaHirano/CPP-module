#include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int main()
{
	Zombie* greg = newZombie("Gregg");
	randomChump("Bruce");
	greg->announce();
	delete greg;
	return 0;
}
