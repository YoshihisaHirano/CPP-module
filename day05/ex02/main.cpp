#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
	try {
		Bureaucrat ronnie("ronnie", 1); 
		Bureaucrat cassie("cassie", 100); 

		RobotomyRequestForm		roboForm("Bender"); // sign 72, exec 45
		PresidentialPardonForm	zaffodForm("Tricia"); // sign 25, exec 5
		ShrubberyCreationForm	shrubForm("My backyard"); // sign 145, exec 137

		shrubForm.execute(cassie);
		// cassie.signForm(roboForm); //will fail
		cassie.signForm(shrubForm);
		// cassie.signForm(zaffodForm); // will fail
		shrubForm.execute(cassie);
		
		ronnie.signForm(roboForm);
		ronnie.signForm(zaffodForm);
		roboForm.execute(ronnie);
		//zaffodForm.execute(cassie); //will fail
		zaffodForm.execute(ronnie);

	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
