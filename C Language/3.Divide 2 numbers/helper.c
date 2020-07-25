#include "header.h"

//=======================================================
// Name: Divide
// Input: iNo1(int), iNo2(int)
// Output: int division of two numbers
// Author: Ganesh Narayan Jaiwal
// Date: 25 Jul 2020
// Description: This function takes 2 numbers as input and return its devision in integer
//=======================================================

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if (iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;
}