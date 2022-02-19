#include "Bureaucrat.hpp"

int main()
{
	{
		try {
			Bureaucrat("johnny", 160);
		} catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try {
			Bureaucrat("vinnie", 0);
		} catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try {
		Bureaucrat lessie("lessie", 3);
		Bureaucrat bobby("bobby", 149);

		std::cout << lessie << std::endl;
		std::cout << bobby << std::endl;

		lessie.incrementGrade();
		lessie.incrementGrade();
		std::cout << lessie << std::endl;
		// lessie.incrementGrade();

		bobby.incrementGrade();
		std::cout << bobby << std::endl;
		bobby.decrementGrade();
		bobby.decrementGrade();
		std::cout << bobby << std::endl;
		bobby.decrementGrade();

		} catch (const std::exception& e) { 
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
