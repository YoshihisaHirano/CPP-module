#include "Array.hpp"
#include <iostream>

int main()
{
	{
		Array<int> array;
		std::cout << "size: " << array.size() << std::endl;
		std::cout << array << std::endl;
	}
	{
		Array<double> darray(5);

		darray[0] = 7.879;
		darray[1] = 69.69696;
		darray[2] = 42.2126;
		darray[3] = 21.42;
		darray[4] = 8;
		std::cout << darray << std::endl;
		std::cout << "size: " << darray.size() << std::endl;
		try
		{
			std::cout << darray[5] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		Array<std::string> sArray(2);

		sArray[0] = "kitty";
		sArray[1] = "rainbow";
		std::cout << sArray << std::endl;
		std::cout << "size: " << sArray.size() << std::endl;

		Array<std::string> anotherSArray(sArray);
		std::cout << "size: " << anotherSArray.size() << std::endl;
		std::cout << anotherSArray << std::endl;
		anotherSArray[0] = "puppy";

		std::cout << "after modification:" << std::endl;
		std::cout << "initial arr: " << sArray << std::endl;
		std::cout << "second arr: " << anotherSArray << std::endl;

		Array<std::string> yetAnotherSArr(5);
		std::cout << "size: " << yetAnotherSArr.size() << std::endl;
		yetAnotherSArr = anotherSArray;
		std::cout << "new size: " << yetAnotherSArr.size() << std::endl;
		yetAnotherSArr[0] = "hello";
		std::cout << "after modification:" << std::endl;
		std::cout << "initial arr: " << anotherSArray << std::endl;
		std::cout << "second arr: " << yetAnotherSArr << std::endl;
	}

	return 0;
}
