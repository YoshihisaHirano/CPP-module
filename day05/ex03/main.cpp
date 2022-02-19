#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(){
	Intern		intern;
	Bureaucrat	bureauKing("King", 1);
	AForm		*anotherForm;

	anotherForm = intern.makeForm("robotomy request", "Trashy");
	bureauKing.signForm(*anotherForm);
	anotherForm->execute(bureauKing);
	delete anotherForm;

	anotherForm = intern.makeForm("presidential pardon", "Arthur Dent");
	bureauKing.signForm(*anotherForm);
	anotherForm->execute(bureauKing);
	delete anotherForm;

	anotherForm = intern.makeForm("shrubbery creation", "Jupiter");
	bureauKing.signForm(*anotherForm);
	anotherForm->execute(bureauKing);
	delete anotherForm;

	intern.makeForm("i can't take it anymore", "me");
}