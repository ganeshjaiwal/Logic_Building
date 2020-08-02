#include "header.h"

//================================================
// Name: displayNonFactors
// Input: int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 2 Aug 2020
// Description: Prints non factors
//================================================

void displayNonFactors(int no)
{
    for (int i = 1; i <= no; i++)
    {
        if (no % i != 0)
        {
            printf("%d ", i);
        }
    }
}