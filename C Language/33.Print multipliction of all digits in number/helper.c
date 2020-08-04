#include "header.h"

//================================================
// Name: multiplyAllDigits
// Input: int
// Output: int
// Author: Ganesh Narayan Jaiwal
// Date: 4 Aug 2020
// Description: Multiply all digits from given number
//================================================

int multiplyAllDigits(int no)
{
    int mul = 1;
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
        mul *= no % 10;
        no /= 10;
    }
    return mul;
}
