#include "Karen.hpp"
#include <iostream>

enum statuses {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	WRONG_INPUT,
};

int main(int argc, char **argv)
{
	statuses status;
	std::string	arg;
	Karen		karen;

	if (argc < 2) {
		std::cerr << "Need something to filter" << std::endl;
		return (0);
	}
	status = WRONG_INPUT;
	arg = std::string(argv[1]);
	status = arg == "DEBUG" ? DEBUG : status;
	status = arg == "INFO" ? INFO : status;
	status = arg == "WARNING" ? WARNING : status;
	status = arg == "ERROR" ? ERROR : status;

	switch (status)
	{
	case DEBUG: {
		std::cout << "[ DEBUG ]" << std::endl;
		karen.complain("debug");
		std::cout << std::endl;
	}
	case INFO:
		std::cout << "[ INFO ]" << std::endl;
		karen.complain("info");
		std::cout << std::endl;
	
	case WARNING:
		std::cout << "[ WARNING ]" << std::endl;
		karen.complain("warning");
		std::cout << std::endl;
	
	case ERROR:
		std::cout << "[ ERROR ]" << std::endl;
		karen.complain("error");
		std::cout << std::endl;
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	return 0;
}
