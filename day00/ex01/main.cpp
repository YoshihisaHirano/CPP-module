#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook	awesome_phonebook;
	std::string command;
	std::string firstName, lastName, nickname, phone, secret;
	int			index;

	index = -1;
	while (true) {
		std::cout << ">> ";
		std::cin >> command;
		std::cin.ignore();
		if (command == "EXIT")
			return (0);
		else if (command == "ADD") {
			std::cout << "Please insert first name: ";
			std::getline(std::cin, firstName);
			std::cout << "Please insert last name: ";
			std::getline(std::cin, lastName);
			std::cout << "Please insert nickname: ";
			std::getline(std::cin, nickname);
			std::cout << "Please insert phone number: ";
			std::cin >> phone;
			std::cin.ignore();
			std::cout << "Please insert darkest secret: ";
			std::getline(std::cin, secret);
			awesome_phonebook.add(firstName, lastName, nickname, phone, secret);
		}
		else if (command == "SEARCH") {
			if (!awesome_phonebook.displayPhoneBook())
				continue;
			std::cout << "Please choose the index to display: ";
			if (std::cin >> index)
				awesome_phonebook.search(index);
			else
			{
				std::cout << "-- Well, you know, indices are usually numbers --" << std::endl;
				std::cin.clear();
				std::cin.ignore(10000, '\n');
			}
		}
		else
			std::cout << "-- You have an amazing choice of ADD, SEARCH and EXIT, what else do you want? --" << std::endl;
	}
	return 0;
}
