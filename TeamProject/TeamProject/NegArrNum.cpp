#include "MainHeader.h"

void NegArrNum(int* array, int size)
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
