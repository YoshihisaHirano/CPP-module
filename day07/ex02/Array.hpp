#ifndef __ARRAY_H__
#define __ARRAY_H__
#include <exception>
#include <iostream>

template<typename T>
class Array {

	private:
		T				*arr;
		unsigned int	_size;

		class ArrayOverflowException : public std::exception {
			public:
				const char* what() const throw() { return "The index is out of range!"; }
		};

	public:
		Array() {
			arr = new T[0]();
			_size = 0;
		};
		Array(unsigned int n) {
			arr = new T[n]();
			_size = n;
		};
		~Array() {
			delete[] arr;
		};
		Array(Array const& other) {
			arr = new T[other.size()]();
			for (unsigned int i = 0; i < other.size(); i++) {
				arr[i] = other.arr[i];
			}
			_size = other.size();
		};

		Array& operator=(Array const& other) {
			delete[] arr;
			arr = new T[other.size()]();
			for (unsigned int i = 0; i < other.size(); i++) {
				arr[i] = other.arr[i];
			}
			_size = other.size();
			return *this;
		};

		T& operator[](unsigned int index) { 
			if (index >= _size) { throw ArrayOverflowException(); }
			return *(arr + index);
		};

		const T &operator[](unsigned int index) const {
			if (index >= _size) { throw ArrayOverflowException(); }
			return *(arr + index);
		};

		unsigned int size() const { 
			return this->_size; 
		};
};

template<typename T >
std::ostream& operator<<(std::ostream& o, Array<T> const& arr) {
	for (unsigned int i = 0; i < arr.size(); i++) {
		o << arr[i] << " ";
	}
	return o;
}


#endif // __ARRAY_H__