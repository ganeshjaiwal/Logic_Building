#include "header.h"

//================================================
// Name: calculatePercentage
// Input: int int
// Output: float
// Author: Ganesh Narayan Jaiwal
// Date: 4 Aug 2020
// Description: Get marks from user and calculate its percentage
//================================================

float calculatePercentage(int total, int marksO)
{
    if (total == 0)
    {
        printf("Invalid Input.");
        return 0;
    }

    return (((float)marksO * 100) / (float)total);
}