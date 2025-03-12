#include <iostream>
#include "MainHeader.h"

int main()
{
	int array[100];
	int size{};
	std::cout << "Input size of array: ";
	std::cin >> size;
	std::cout << "Input array: ";
	for (size_t i = 0; i < size; ++i)
	{
		std::cin >> array[i];
	}
	FindElement(array, size);
	return 0;
}
	