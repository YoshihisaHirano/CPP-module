#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() 
: AForm("robotomy request", 72, 45), target("innocent robot")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("robotomy request", 72, 45), target(target)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& other) 
: AForm("robotomy request", 72, 45), target(other.target)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& other)
{
	target = other.target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSignStatus()) {
		std::cout << "The form " << this->getName() << " hasn't been signed yet!" << std::endl;
		return;
	}
	if (executor.getGrade() > this->getGradeToExec())
		throw GradeTooLowException();
	std::cout << "drzzzzz drrrdrr zzzrzrz" << std::endl;
	std::srand(std::time(0));
	int	success = std::rand();
	if (success % 2)
		std::cout << target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << target << " robotomy failed......." << std::endl;
}
