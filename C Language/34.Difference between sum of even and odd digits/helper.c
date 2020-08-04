#include "header.h"

//================================================
// Name: getDiffOfSumOfEvenAndOddDigits
// Input: int
// Output: int
// Author: Ganesh Narayan Jaiwal
// Date: 4 Aug 2020
// Description: Return difference between sum of even and odd digits of given number
//================================================

int getDiffOfSumOfEvenAndOddDigits(int no)
{
    int evenSum = 0;
    int oddSum = 0;
    if (no == 0)
    {
        return 0;
    }
    if (no < 0)
    {
        no = -no;
    }
    while (no > 0)
    {
        if ((no % 10) % 2 == 0)
        {
            evenSum += no % 10;
        }
        else
        {
            oddSum += no % 10;
        }
        no /= 10;
    }
    return (evenSum - oddSum);
}
