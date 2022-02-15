#include "ClapTrap.hpp"

int main(){
	ClapTrap first("clappy");

	first.attack("bad guy");
	
	first.takeDamage(5);
	first.showStats();
	
	first.beRepaired(4);
	first.showStats();
	
	first.takeDamage(120);
	first.showStats();

	first.attack("another bad guy");
	first.takeDamage(100500);

	first.beRepaired(100501);
	first.showStats();
}