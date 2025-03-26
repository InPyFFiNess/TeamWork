#include<iostream>
#include "MainHeader.h"


template <typename T>
T MaxElement(T* array, int32_t size)
{
    int32_t maxIndex{};
    for (int32_t i = 1; i < size; i++)
    {
        if (array[i] > array[maxIndex])
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

template <typename T>
T MinElement(T* array, int32_t size)
{
    int32_t minIndex{};
    for (int32_t i = 1; i < size; ++i)
    {
        if (array[i] < array[minIndex])
        {
            minIndex = i;
        }
    }
    return minIndex;
}