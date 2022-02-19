#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	{
		Bureaucrat bureaucrat("ronnie", 1); 
		Bureaucrat bureaucrat_1("cassie", 100); 
		Form form("absolutely useless form", 10, 12);
		std::cout << form << std::endl << std::endl;

		std::cout << form.getName() << std::endl;
		std::cout << form.getSignStatus() << std::endl;
		std::cout << form.getGradeToSign() << std::endl;
		std::cout << form.getGradeToExec() << std::endl << std::endl;

		bureaucrat_1.signForm(form);
		std::cout << form.getSignStatus() << std::endl;

		bureaucrat.signForm(form);
		std::cout << form.getSignStatus() << std::endl;
		bureaucrat.signForm(form);
	}
}
