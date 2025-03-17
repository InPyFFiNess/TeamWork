#include"MainHeader.h"
int MaxElement(int* array, int size)
{
	int maxIndex{};
	for (int i = 1; i < size; ++i)
	{
		if (array[i] > array[maxIndex])
		{
			maxIndex = i;
		}
	}
	return maxIndex;
}

int MinElement(int* array, int size)
{
	int minIndex{};
	for (int i = 1; i < size; ++i)
	{
		if (array[i] < array[minIndex])
		{
			minIndex = i;
		}
	}
	return minIndex;
}
