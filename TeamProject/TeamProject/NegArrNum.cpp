#include "MainHeader.h"

template <typename T>
void NegArrNum(T* array, int size)
{
	for (size_t i = 0; i < size; ++i)
	{
		if (array[i] < 0)
		{
			array[i] = 0;
		}
		std::cout << array[i] << "  ";
	}
}
