#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
: AForm("presidential pardon", 25, 5), target("innocent guy")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("presidential pardon", 25, 5), target(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& other) 
: AForm("presidential pardon", 25, 5), target(other.target)
{
	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& other)
{
	target = other.target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSignStatus()) {
		std::cout << "The form " << this->getName() << " hasn't been signed yet!" << std::endl;
		return;
	}
	if (executor.getGrade() > this->getGradeToExec())
		throw GradeTooLowException();
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}