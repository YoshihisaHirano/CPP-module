#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	std::string target;
	
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const& other);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm& operator=(ShrubberyCreationForm const& other);

	virtual void	execute(Bureaucrat const & executor) const;
};

#endif // __SHRUBBERYCREATIONFORM_H__