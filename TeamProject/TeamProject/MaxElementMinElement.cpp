#include"MainHeader.h"
int32_t MaxElement(int32_t* array, int32_t size)
{
	int32_t maxIndex{};
	for (int i = 1; i < size; ++i)
	{
		if (array[i] > array[maxIndex])
		{
			maxIndex = i;
		}
	}
	return maxIndex;
}

int32_t MinElement(int32_t* array, int32_t size)
{
	int32_t minIndex{};
	for (int i = 1; i < size; ++i)
	{
		if (array[i] < array[minIndex])
		{
			minIndex = i;
		}
	}
	return minIndex;
}
