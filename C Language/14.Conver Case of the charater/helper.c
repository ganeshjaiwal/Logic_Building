#include <ctype.h>
#include "header.h"

//================================================
// Name: converCharaterCase
// Input: character
// Output: integer
// Author: Ganesh Narayan Jaiwal
// Date: 2 Aug 2020
// Description: This function returns invert case of charater
//================================================

int converCharaterCase(char ch)
{
    if (islower(ch))
    {
        return toupper(ch);
    }
    else if (isupper(ch))
    {
        return tolower(ch);
    }
    else
    {
        return tolower(ch);
    }
}