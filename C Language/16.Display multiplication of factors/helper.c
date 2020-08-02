#include "header.h"

//================================================
// Name: displayMultipltiplicationOfNumber
// Input: int
// Output: int
// Author: Ganesh Narayan Jaiwal
// Date: 2 Aug 2020
// Description: Display multiplication of the factor
//================================================

int displayMultipltiplicationOfNumber(int no)
{
    int mul = 1;
    for (int i = 1; i <= no / 2; i++)
    {
        if (no % i == 0)
        {
            mul *= i;
        }
    }
    return mul;
}