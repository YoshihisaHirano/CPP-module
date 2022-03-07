#ifndef __EASYFIND_H__
#define __EASYFIND_H__

#include <algorithm>

template <typename T>
typename T::iterator easyfind(T container, int value)
{
	typename T::iterator res = std::find(container.begin(), container.end(), value);
	if (res == container.end())
		throw std::out_of_range("This value is not found!");
	return res;
}
#endif // __EASYFIND_H__