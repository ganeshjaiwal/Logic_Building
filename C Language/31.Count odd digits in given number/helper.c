#include "header.h"

//================================================
// Name: countOddDigitsOccurances
// Input: int
// Output: int
// Author: Ganesh Narayan Jaiwal
// Date: 4 Aug 2020
// Description: Count occurances of odd digits in given number
//================================================

int countOddDigitsOccurances(int no)
{
    int cnt = 0;
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
        if ((no % 10) % 2 != 0)
        {
            cnt++;
        }
        no /= 10;
    }
    return cnt;
}
