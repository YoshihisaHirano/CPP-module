#include "AForm.hpp"

AForm::AForm()
: name("some AForm"), isSigned(false), gradeToSign(150), gradeToExec(150)
{
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExec) 
: name(name), isSigned(false)
{
	if (gradeToExec < 1 || gradeToSign < 1)
		throw GradeTooHighException();
	if (gradeToExec > 150 || gradeToSign > 150)
		throw GradeTooLowException();
	this->gradeToExec = gradeToExec;
	this->gradeToSign = gradeToSign;
}

AForm::AForm(AForm const& other) 
: name(other.name), isSigned(false), gradeToSign(other.gradeToSign), gradeToExec(other.gradeToExec)
{	
}

AForm::~AForm()
{
}

AForm& AForm::operator=(AForm const& other)
{
	gradeToSign = other.gradeToSign;
	gradeToExec = other.gradeToExec;
	isSigned = other.isSigned;
	return *this;
}

std::string AForm::getName() const
{
	return name;
}

int AForm::getGradeToSign() const
{
	return gradeToSign;
}

int AForm::getGradeToExec() const
{
	return gradeToExec;
}

bool AForm::getSignStatus() const
{
	return isSigned;
}

void AForm::setSigned()
{
	isSigned = true;
}

void AForm::beSigned(const Bureaucrat &bur)
{
	if (getSignStatus())
		return;
	if (bur.getGrade() > getGradeToSign())
		throw GradeTooLowException();
	setSigned();
}

std::ostream& operator<<(std::ostream& o, AForm& AForm)
{
	o << AForm.getName() << " [grade to sign: " << AForm.getGradeToSign() <<
	"; grade to execute: " << AForm.getGradeToExec() << "; is signed: " << (AForm.getSignStatus() ? "true" : "false") << "]";
	return o;
}

const char* AForm::GradeTooHighException::what() const throw() { 
	return "Form error! Grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw() { 
	return "Form error! Grade too low!";
}
