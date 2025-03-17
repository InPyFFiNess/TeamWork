#include "MainHeader.h"
#include <iostream>

void SortArray(int* array, int size)
{
	int temp{};
	for (size_t i = 0; i < size - 1; ++i)
	{
		for (size_t j = 0; j < size - i - 1; ++j)
		{
			if (array[j] >= array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	for (size_t i = 0; i < size; ++i)
	{
		std::cout << array[i] << "  ";
	}
}