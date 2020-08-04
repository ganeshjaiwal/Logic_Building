#include "header.h"

//================================================
// Name: printDigitInReverseOrder
// Input: int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 4 Aug 2020
// Description: Display digits in revers order of provided number
//================================================

void printDigitInReverseOrder(int no)
{
    if (no < 0)
    {
        no = -no;
    }
    while (no > 0)
    {
        printf("%d ", no % 10);
        no = no / 10;
    }
}