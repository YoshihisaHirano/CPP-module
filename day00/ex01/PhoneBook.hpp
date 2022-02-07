#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	_contacts[8];
	int		_contactIndex;
	bool	_isEmpty;

	std::string	_transform_string(std::string original) const;

public:
	PhoneBook();
	~PhoneBook();

	void	add(std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string secret);
	bool	displayPhoneBook() const;
	void	search(int index) const;
};

#endif