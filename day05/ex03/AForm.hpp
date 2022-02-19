#ifndef __AFORM_H__
#define __AFORM_H__
#include "Bureaucrat.hpp"
#include <string>
#include <exception>
#include <iostream>

class Bureaucrat;

class AForm
{
private:
	const std::string	name;
	bool				isSigned;
	int					gradeToSign;
	int					gradeToExec;

public:
	AForm();
	AForm(std::string name, int gradeToSign, int gradeToExec);
	AForm(AForm const& other);
	virtual ~AForm();

	AForm& operator=(AForm const& other);

	std::string	getName() const;
	int			getGradeToSign() const;
	int			getGradeToExec() const;
	bool		getSignStatus() const;
	void		setSigned();

	void		beSigned(const Bureaucrat &bur);

	virtual void	execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& o, AForm& AForm);

#endif 