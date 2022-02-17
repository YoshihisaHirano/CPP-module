#ifndef __Brain_H__
#define __Brain_H__
#include <string>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain();
	~Brain();
	Brain(Brain const& other);
	Brain &operator=(const Brain &other);

};

#endif // __Brain_H__