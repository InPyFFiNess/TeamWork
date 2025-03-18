#include "MainHeader.h"

template <typename T>
void PrintArray(T* array, int size)
{
	for (size_t i = 0; i < size; ++i)
	{
		std::cout << array[i] << "  ";
	}
}
