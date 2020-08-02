#include "header.h"

//================================================
// Name: chechIfVowel
// Input: char
// Output: BOOLEAN
// Author: Ganesh Narayan Jaiwal
// Date: 2 Aug 2020
// Description: This function checks if provided character is vowel or not
//================================================

BOOLEAN chechIfVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
