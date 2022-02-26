#ifndef __ITER_H__
#define __ITER_H__

#include <cstdlib>

template< typename T>
void	iter(T *arr, size_t size, void	(*f)(T& elt))
{
	for (size_t i = 0; i < size; i++)
		f(*(arr + i));
}

template< typename T >
void	printFunc(T& elt)
{
	std::cout << "element: " << elt << " ";
}

template< typename T >
void	printAddress(T& elt)
{
	std::cout << "addr: " << &elt << " ";
}

#endif // __ITER_H__