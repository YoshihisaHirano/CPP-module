#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickname = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
	this->_isEmpty = true;
	return;
}

Contact::~Contact()
{
	return;
}

std::string Contact::getFirstName() const
{
	return this->_firstName;
}

std::string Contact::getLastName() const
{
	return this->_lastName;
}

std::string Contact::getNickname() const
{
	return this->_nickname;
}

std::string Contact::getPhone() const
{
	return this->_phoneNumber;
}

std::string Contact::getSecret() const
{
	return this->_darkestSecret;
}

bool Contact::isEmpty() const
{
	return this->_isEmpty;
}

void Contact::setFirstName(std::string val) 
{
	this->_firstName = val;
	this->_isEmpty = false;
}

void Contact::setLastName(std::string val) 
{
	this->_lastName = val;
}

void Contact::setNickname(std::string val) 
{
	this->_nickname = val;
}

void Contact::setPhone(std::string val) 
{
	this->_phoneNumber = val;
}

void Contact::setSecret(std::string val) 
{
	this->_darkestSecret = val;
}

void Contact::displayContact() const
{
	std::cout << "_________________________" << std::endl;
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkset secret: " << this->_darkestSecret << std::endl;
	std::cout << "_________________________" << std::endl;
}



