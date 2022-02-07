#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name );

int main()
{
	int	zombieQty;

	while(true) {
		std::cout << "\033[1m\033[31mHow many Jeff warriors do you want, milord?" << std::endl;
		if (std::cin >> zombieQty) {
			if (zombieQty == 0) {
				std::cout << "It was a pleasure to serve you, master" << std::endl;
				return 0;
			}
			Zombie *horde = zombieHorde(zombieQty, "Jeff");
			for (int i = 0; i < zombieQty; i++) {
				horde[i].announce();
			}
			delete [] horde;
		}
		else
		{
			std::cout << "Sorry milord, I don't understand" << std::endl;
			std::cin.clear();
			std::cin.ignore(100000, '\n');
		}
	}
	return 0;
}
