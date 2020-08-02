#include "header.h"

//================================================
// Name: displayNEvenNumbers
// Input: int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 2 Aug 2020
// Description: This function prints n even numbers
//================================================

void displayNEvenNumbers(int num)
{
    int evnNo = 2;
    for (int i = 0; i < num; i++)
    {
        printf("%d ", evnNo);
        evnNo += 2;
    }
}