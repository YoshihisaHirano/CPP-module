#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const& )
{

}

Intern::~Intern()
{
}

Intern& Intern::operator=(Intern const& )
{
	return *this;
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	int	idx = -1;
	std::string	possibleForms[3] = { "robotomy request", "presidential pardon", "shrubbery creation"};
	AForm	*form;

	for (int i = 0; i < 3; i++)
	{
		if (possibleForms[i] == name)
		{
			idx = i;
			break;
		}
	}
	form = NULL;

	switch (idx)
	{
	case 0: {
		form = new RobotomyRequestForm(target);
		break;
	}
	case 1: {
		form = new PresidentialPardonForm(target);
		break;
	}
	case 2: {
		form = new ShrubberyCreationForm(target);
		break;
	}
	default: {
		std::cout << "Error! Sir, it seems that such form doesn't exist....." << std::endl;
		return NULL;
	}
	}

	std::cout << "Intern creates " << *form << std::endl;
	return form;
}