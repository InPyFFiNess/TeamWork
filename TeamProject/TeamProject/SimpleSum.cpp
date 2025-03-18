#include "MainHeader.h"

int SimpleSum(int* array, int size)
{
	int sum{};
	for (size_t i = 0; i < size; ++i)
	{
		if (IsPrime(array[i]))
		{
			sum += array[i];
		}
	}
	return sum;
}