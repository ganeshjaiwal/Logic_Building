#include "header.h"

//================================================
// Name: checkDigitOccurences
// Input: int int
// Output: BOOL
// Author: Ganesh Narayan Jaiwal
// Date: 4 Aug 2020
// Description: Count number of occurences of given digit in provided number
//================================================

int checkDigitOccurences(int no, int digi)
{
    int cnt = 0;
    if (no < 0)
    {
        no = -no;
    }

    while (no > 0)
    {
        if (no % 10 == digi)
        {
            cnt++;
        }
        no /= 10;
    }
    return cnt;
}