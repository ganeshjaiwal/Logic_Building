#include "header.h"

//================================================
// Name: Accept
// Input: int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 25 Jul 2020
// Description: This function prints stars accoring to user input
//================================================

void Accept(int iVal)
{
    while (iVal > 0)
    {
        printf("*");
        iVal--;
    }
}
