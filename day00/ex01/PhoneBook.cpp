#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	std::cout << "\033[35mAnother Awesome Phonebook has been created, yay!\033[35m" << std::endl;
	this->_contactIndex = 0;
	this->_isEmpty = true;
	return;
}

PhoneBook::~PhoneBook()
{
	std::cout << "\033[31mGoodbye, friend, I'm returning to the darkness\033[31m" << std::endl;
	return;
}

void PhoneBook::add(std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string secret) 
{
	if (firstName.empty() || lastName.empty() || nickname.empty() || phone.empty() || secret.empty()) {
		std::cout << "-- You don't want any missing fields, do you? Try again --" << std::endl;
		return;
	}	
	this->_isEmpty = false;
	this->_contacts[this->_contactIndex].setFirstName(firstName);
	this->_contacts[this->_contactIndex].setLastName(lastName);
	this->_contacts[this->_contactIndex].setNickname(nickname);
	this->_contacts[this->_contactIndex].setPhone(phone);
	this->_contacts[this->_contactIndex].setSecret(secret);
	this->_contactIndex++;
	if (this->_contactIndex > 7)
		this->_contactIndex = 0;
	std::cout << "-- A new friend is added, how amazing! --" << std::endl;
}

std::string PhoneBook::_transform_string(std::string original) const
{
	std::string padding;

	if (original.size() < 10) {
		padding = std::string(10 - original.size(), ' ');
		original.insert(0, padding);
	}
	if (original.size() > 10) {
		original.replace(9, 1, ".");
		original.erase(10, original.size() - 10);
	}
	return original;
}

bool PhoneBook::displayPhoneBook() const
{
	std::string	padding, firstName, lastName, nickname;

	if (this->_isEmpty) {
		std::cout << "-- Maybe you could try to add someone first? --" << std::endl;
		return false;
	}
	for (int i = 0; i < 8; i++)
	{
		if (this->_contacts[i].isEmpty())
			break;
		padding = std::string(9, ' ');
		std::cout << "|" << padding << i + 1 << "|";
		firstName = this->_contacts[i].getFirstName();
		lastName = this->_contacts[i].getLastName();
		nickname = this->_contacts[i].getNickname();
		std::cout << this->_transform_string(firstName) << "|";
		std::cout << this->_transform_string(lastName) << "|";
		std::cout << this->_transform_string(nickname) << "|" << std::endl;
	}
	return true;
}

void PhoneBook::search(int index) const
{
	index--;
	if (index < 0 || index > 7) {
		std::cout << "-- Close enough but still out of range --" << std::endl;
		return;
	}
	if (this->_contacts[index].isEmpty()) {
		std::cout << "-- Nope, no contact there, better luck next time --" << std::endl;
		return;
	}
	this->_contacts[index].displayContact();
}
