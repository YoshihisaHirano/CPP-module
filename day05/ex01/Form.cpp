#include "Form.hpp"

Form::Form()
: name("some form"), isSigned(false), gradeToSign(150), gradeToExec(150)
{
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) 
: name(name), isSigned(false)
{
	if (gradeToExec < 1 || gradeToSign < 1)
		throw GradeTooHighException();
	if (gradeToExec > 150 || gradeToSign > 150)
		throw GradeTooLowException();
	this->gradeToExec = gradeToExec;
	this->gradeToSign = gradeToSign;
}

Form::Form(Form const& other) 
: name(other.name), isSigned(false), gradeToSign(other.gradeToSign), gradeToExec(other.gradeToExec)
{	
}

Form::~Form()
{
}

Form& Form::operator=(Form const& other)
{
	gradeToSign = other.gradeToSign;
	gradeToExec = other.gradeToExec;
	isSigned = other.isSigned;
	return *this;
}

std::string Form::getName() const
{
	return name;
}

int Form::getGradeToSign() const
{
	return gradeToSign;
}

int Form::getGradeToExec() const
{
	return gradeToExec;
}

bool Form::getSignStatus() const
{
	return isSigned;
}

void Form::beSigned(const Bureaucrat &bur)
{
	if (this->isSigned)
		return;
	if (bur.getGrade() > gradeToSign)
		throw GradeTooLowException();
	this->isSigned = true;
}

std::ostream& operator<<(std::ostream& o, Form& form)
{
	o << form.getName() << " [grade to sign: " << form.getGradeToSign() <<
	"; grade to execute: " << form.getGradeToExec() << "; is signed: " << (form.getSignStatus() ? "true" : "false") << "]";
	return o;
}

const char* Form::GradeTooHighException::what() const throw() { 
	return "Form error! Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw() { 
	return "Form error! Grade too low!";
}
