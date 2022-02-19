#ifndef __ROBOTOMYREQUESTFORM_H__
#define __ROBOTOMYREQUESTFORM_H__
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string target;
	
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const& other);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm& operator=(RobotomyRequestForm const& other);

	virtual void	execute(Bureaucrat const & executor) const;
};

#endif // __ROBOTOMYREQUESTFORM_H__