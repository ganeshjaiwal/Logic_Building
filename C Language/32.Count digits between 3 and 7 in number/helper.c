#include "header.h"

//================================================
// Name: countOccurancesBetween3And7
// Input: int
// Output: int
// Author: Ganesh Narayan Jaiwal
// Date: 4 Aug 2020
// Description: Count occurances of digits between 3 and 7
//================================================

int countOccurancesBetween3And7(int no)
{
    int cnt = 0;
    if (no < 0)
    {
        no = -no;
    }
    while (no > 0)
    {
        int digi = no % 10;
        if (digi > 3 && digi < 7)
        {
            cnt++;
        }
        no /= 10;
    }
    return cnt;
}
