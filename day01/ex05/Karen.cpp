#include "Karen.hpp"
#include <iostream>

Karen::Karen()
{
	return;
}

Karen::~Karen()
{
	return;
}

void Karen::complain(std::string level) 
{
	int	index;

	karenFunc actions[4] = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };

	index = -1;
	index = level == "debug" ? 0 : index;
	index = level == "info" ? 1 : index;
	index = level == "warning" ? 2 : index;
	index = level == "error" ? 3 : index;

	if (index == -1) {
		std::cout << "AAARGRGH" << std::endl;
		return;
	}
	
	(this->*(actions[index]))();
}

void Karen::debug(void) 
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return;
}

void Karen::info(void) 
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
	"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return;
}

void Karen::warning(void) 
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for "
	"years whereas you started working here since last month." << std::endl;
	return;
}

void Karen::error(void) 
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return;
}
