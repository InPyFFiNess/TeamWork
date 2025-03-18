#include "MainHeader.h"
#include <iostream>

template <typename T>
void FindElement(T* array, int size)
{
	int element{};
	int position{-1};
	std::cout << "Input element: ";
	std::cin >> element;
	for (size_t i = 0; i < size; ++i)
	{
		if (array[i] == element)
		{
			position = i;
		}
	}
	std::cout << position;
}