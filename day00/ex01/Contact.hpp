#ifndef __CONTACT_H__
#define __CONTACT_H__
#include <string>

class Contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
	bool		_isEmpty;

public:
	Contact();
	Contact(std::string name, std::string lastName, std::string nick, std::string phone, std::string secret);
	~Contact();

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhone() const;
	std::string getSecret() const;
	bool 		isEmpty() const;

	void	setFirstName(std::string val);
	void	setLastName(std::string val);
	void	setNickname(std::string val);
	void	setPhone(std::string val);
	void	setSecret(std::string val);

	void	displayContact() const;
};

#endif