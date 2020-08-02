#include "header.h"

//================================================
// Name: getSumOfNoFactors
// Input: int
// Output: int
// Author: Ganesh Narayan Jaiwal
// Date: 2 Aug 2020
// Description: Returns sum of non factors
//================================================

int getSumOfNoFactors(int no)
{
    int sum = 0;
    for (int i = 1; i <= no; i++)
    {
        if (no % i != 0)
        {
            sum += i;
        }
    }
    return sum;
}