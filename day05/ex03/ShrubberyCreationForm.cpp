#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() 
: AForm("shrubbery creation", 145, 137), target("some spot")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("shrubbery creation", 145, 137), target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& other) 
: AForm("shrubbery creation", 145, 137), target(other.target)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& other)
{
	target = other.target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::fstream	outfile;
	std::string		filename;

	if (!this->getSignStatus()) {
		std::cout << "The form " << this->getName() << " hasn't been signed yet!" << std::endl;
		return;
	}
	if (executor.getGrade() > this->getGradeToExec())
		throw GradeTooLowException();
	filename = target;
	filename += "_shrubbery";
	outfile.open(filename, std::fstream::out);
	if (!outfile.is_open())
	{
		std::cerr << "Could not create file!" << std::endl;
		return;
	}
	outfile << "   s8O8OOb   ooo" << std::endl;
	outfile << "  dJM69QO8P pugo9b" << std::endl;
	outfile << " CgggbU8OU 6UUodoUOdcb" << std::endl;
	outfile << "     6OuU999\\`gcoUodpP" << std::endl;
	outfile << "       \\\\  /douUP" << std::endl;
	outfile << "         ||||" << std::endl;
	outfile << "         ||||" << std::endl;
	outfile << "         ||||" << std::endl;
	outfile << "   ...../||||\\...." << std::endl;
	outfile.close();
}
