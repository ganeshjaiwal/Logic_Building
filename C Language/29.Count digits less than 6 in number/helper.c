#include "header.h"

//================================================
// Name: countLessThan6Occurances
// Input: int
// Output: int
// Author: Ganesh Narayan Jaiwal
// Date: 4 Aug 2020
// Description: Count occurances of digits less that 6
//================================================

int countLessThan6Occurances(int no)
{
    int cnt = 0;
    if (no < 0)
    {
        no = -no;
    }
    while (no > 0)
    {
        if (no % 10 < 6)
        {
            cnt++;
        }
        no /= 10;
    }
    return cnt;
}
