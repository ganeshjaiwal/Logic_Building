#include "header.h"

//================================================
// Name: Display
// Input: int, int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 25 Jul 2020
// Description: This function prints first number 2nd number of times
//================================================

void Display(int iVal, int iFreq)
{
    for (int i = 0; i < iFreq; i++)
    {
        printf("%d ", iVal);
    }
}
