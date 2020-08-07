#include <stdio.h>

void printNumberRange(int);

int main()
{
    int uNo;
    printf("Enter number: ");
    scanf("%d", &uNo);
    printNumberRange(uNo);
    return 0;
}

//================================================
// Name: printNumberRange
// Input: int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug
// Description: Prints range of number
//================================================

void printNumberRange(int no)
{
    if (no < 50)
    {
        printf("Smaller.");
        return;
    }
    if (no >= 50 && no < 100)
    {
        printf("Medium.");
        return;
    }
    if (no >= 100)
    {
        printf("Large.");
        return;
    }
}
