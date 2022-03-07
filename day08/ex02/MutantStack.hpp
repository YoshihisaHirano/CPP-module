#ifndef __MUTANTSTACK_H__
#define __MUTANTSTACK_H__
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
	/* data */
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	MutantStack() : std::stack<T>() {};
	MutantStack(const MutantStack& other)
	{
		std::stack<T>::operator=(other);
	}
	MutantStack& operator=(const MutantStack& other)
	{
		std::stack<T>::operator=(other);
		return *this;
	}
	~MutantStack() {};

	iterator begin() {
		return this->std::stack<T>::c.begin();
	}

	const_iterator cbegin() {
		return this->std::stack<T>::c.cbegin();
	}

	reverse_iterator rbegin() {
		return this->std::stack<T>::c.rbegin();
	}

	const_reverse_iterator crbegin() {
		return this->std::stack<T>::c.crbegin();
	}

	iterator end() {
		return this->std::stack<T>::c.end();
	}

	const_iterator cend() {
		return this->std::stack<T>::c.cend();
	}

	reverse_iterator rend() {
		return this->std::stack<T>::c.rend();
	}

	const_reverse_iterator crend() {
		return this->std::stack<T>::c.crend();
	}
};


#endif // __MUTANTSTACK_H__