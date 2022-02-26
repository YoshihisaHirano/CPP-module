#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) 
{
	int	randNum;

	std::srand(std::time(0));
	randNum = std::rand() % 9 + 1;
	if (randNum <= 3) return new A();
	if (randNum <= 6) return new B();
	if (randNum <= 9) return new C();
	return NULL;
}

void identify(Base* p)
{
	A* a;
	B* b;
	C* c;

	a = dynamic_cast<A*>(p);
	if (a != nullptr) {
		std::cout << "p points to an A instance" << std::endl;
		return;
	}
	b = dynamic_cast<B*>(p);
	if (b != nullptr) {
		std::cout << "p points to a B instance" << std::endl;
		return;
	}
	c = dynamic_cast<C*>(p);
	if (c != nullptr) {
		std::cout << "p points to a C instance" << std::endl;
		return;
	}
	std::cout << "p points to some unknown class instance!" << std::endl;
}

void identify(Base& p)
{
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "p refernces an A instance" << std::endl;
		(void)a;
	} catch (std::bad_cast &bc) {
		try {
			B& b = dynamic_cast<B&>(p);
			std::cout << "p refernces a B instance" << std::endl;
			(void)b;
		} catch (std::bad_cast &another_bc) {
			try {
				C& c = dynamic_cast<C&>(p);
				std::cout << "p refernces a C instance" << std::endl;
				(void)c;
			}
			catch(std::bad_cast &other_bc) {
				std::cout << "p references some unknown class instance!" << std::endl;
			}
			
		}
	}
}

int main()
{
	Base *ptr = generate();
	
	identify(ptr);
	identify(*ptr);
	
	delete ptr;
	return 0;
}
