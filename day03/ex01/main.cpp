#include "ScavTrap.hpp"
#include <iostream>

int main(){
	{
		ScavTrap scavtrap;
	}

	{
		std::cout << std::endl;
		
		ScavTrap scavtrap("scavyy");
	
		scavtrap.attack("bad guy");
	
		scavtrap.takeDamage(5);
		scavtrap.showStats();
		
		scavtrap.beRepaired(4);
		scavtrap.showStats();
		
		scavtrap.takeDamage(120);
		scavtrap.showStats();

		scavtrap.attack("another bad guy");
		scavtrap.takeDamage(100500);

		scavtrap.beRepaired(100501);
		scavtrap.showStats();

		scavtrap.guardGate();
	}
}