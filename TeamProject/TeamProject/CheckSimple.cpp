#include "MainHeader.h"

bool IsPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    int i{ 2 };
    while (i <= sqrt(number))
    {
        if (number % i == 0)
        {
            return false;
        }
        ++i;
    }
    return true;
}