#ifndef __INTERN_H__
#define __INTERN_H__
#include "AForm.hpp"

class Intern
{

public:
	Intern();
	Intern(Intern const& other);
	~Intern();

	Intern& operator=(Intern const& other);

	AForm	*makeForm(std::string name, std::string target);
};

#endif // __INTERN_H__