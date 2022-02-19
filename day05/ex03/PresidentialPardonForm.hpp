#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string target;
	
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const& other);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm& operator=(PresidentialPardonForm const& other);

	virtual void	execute(Bureaucrat const & executor) const;
};


#endif // __PRESIDENTIALPARDONFORM_H__