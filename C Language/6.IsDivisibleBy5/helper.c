#include "header.h"

//================================================
// Name: Check
// Input: int
// Output: BOOL (int)
// Author: Ganesh Narayan Jaiwal
// Date: 25 Jul 2020
// Description: This function returns true if given number is divisible by 5
//================================================

BOOL Check(int iNo)
{
    if ((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
