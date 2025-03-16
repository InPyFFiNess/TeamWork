#include"MainHeader.h"

void NegArrNum(int32_t* array, int32_t size)
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
