#ifndef __FORM_H__
#define __FORM_H__
#include "Bureaucrat.hpp"
#include <string>
#include <exception>
#include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				isSigned;
	int					gradeToSign;
	int					gradeToExec;

public:
	Form();
	Form(std::string name, int gradeToSign, int gradeToExec);
	Form(Form const& other);
	~Form();

	Form& operator=(Form const& other);

	std::string	getName() const;
	int			getGradeToSign() const;
	int			getGradeToExec() const;
	bool		getSignStatus() const;

	void		beSigned(const Bureaucrat &bur);

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

std::ostream& operator<<(std::ostream& o, Form& form);

#endif // __FORM_H__