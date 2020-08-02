#include "header.h"

//================================================
// Name: displayEvenFactors
// Input: int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 2 Aug 2020
// Description: Display even factors of the number
//================================================

void displayEvenFactors(int num)
{
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0 && i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}
