#include "header.h"

//================================================
// Name: displayFactorsDecreasing
// Input: int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 2 Aug 2020
// Description: Prints factors in decreasing order
//================================================

void displayFactorsDecreasing(int no)
{
    for (int i = no / 2; i >= 1; i--)
    {
        if (no % i == 0)
        {
            printf("%d ", i);
        }
    }
}