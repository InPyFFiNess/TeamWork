#include"MainHeader.h"

template <typename T>
int MaxElement(T* array, int size)
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

template <typename T>
int MinElement(T* array, int size)
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
