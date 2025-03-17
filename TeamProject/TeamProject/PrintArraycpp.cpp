#include "MainHeader.h"

void PrintArray(int* array, int size)
{
	for (size_t i = 0; i < size; ++i)
	{
		std::cout << array[i] << "  ";
	}
}
