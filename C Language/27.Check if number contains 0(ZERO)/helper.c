#include "header.h"

//================================================
// Name: checkIsContainZero
// Input: int
// Output: BOOL
// Author: Ganesh Narayan Jaiwal
// Date: 4 Aug 2020
// Description: Check if provided number contains 0
//================================================

BOOL checkIsContainZero(int no)
{
    if (no < 0)
    {
        no = -no;
    }
    if (no == 0)
    {
        return TRUE;
    }
    while (no > 0)
    {
        if (no % 10 == 0)
        {
            return TRUE;
        }
        else
        {
            no = no / 10;
        }
    }
    return FALSE;
}