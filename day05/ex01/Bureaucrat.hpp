#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__
#include "Form.hpp"
#include <string>
#include <exception>
#include <iostream>

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	int		grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const& other);
	~Bureaucrat();

	Bureaucrat& operator=(Bureaucrat const& other);

	std::string	getName() const;
	int			getGrade() const;
	void		incrementGrade();
	void		decrementGrade();
	void		signForm(Form& form) const;
	
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& o, Bureaucrat bureacrat);

#endif // __BUREAUCRAT_H__