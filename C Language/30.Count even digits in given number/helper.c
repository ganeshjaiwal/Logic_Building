#include "header.h"

//================================================
// Name: countEvenDigitsOccurances
// Input: int
// Output: int
// Author: Ganesh Narayan Jaiwal
// Date: 4 Aug 2020
// Description: Count occurances of even digits in given number
//================================================

int countEvenDigitsOccurances(int no)
{
    int cnt = 0;
    if (no == 0)
    {
        return 1;
    }
    if (no < 0)
    {
        no = -no;
    }
    while (no > 0)
    {
        if ((no % 10) % 2 == 0)
        {
            cnt++;
        }
        no /= 10;
    }
    return cnt;
}
