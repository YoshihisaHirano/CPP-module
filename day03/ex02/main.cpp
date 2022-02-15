#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(){
	{
		ScavTrap sample;
	}

	{
		FragTrap frag_trap;
	}

	std::cout << std::endl;

	FragTrap frag_trap("fraggy");

	frag_trap.highFivesGuys();
	frag_trap.highFivesGuys();
	frag_trap.highFivesGuys();
	frag_trap.highFivesGuys();
	frag_trap.highFivesGuys();

	frag_trap.attack("bad guys");
	frag_trap.takeDamage(50);
	frag_trap.showStats();
	frag_trap.attack("more bad guys");
	frag_trap.takeDamage(100500);
	frag_trap.showStats();
	frag_trap.attack("truly evil guys");
	frag_trap.beRepaired(56);
	frag_trap.showStats();
}