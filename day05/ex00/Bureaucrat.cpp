#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("some dude"), grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const& other) : name(other.name), grade(other.grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& other)
{
	grade = other.grade;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::incrementGrade()
{
	if (grade == 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade()
{
	if (grade == 150)
		throw GradeTooLowException();
	grade++;
}

std::ostream& operator<<(std::ostream& o, Bureaucrat bureacrat)
{
	o << bureacrat.getName() << ", bureaucrat grade " << bureacrat.getGrade();
	return o;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Error! Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error! Grade too low!";
}