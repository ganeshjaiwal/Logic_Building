#include <stdio.h>

//================================================
// Name: printNumberLine
// Input: int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Prints number line for given number
//================================================

void printNumberLine(int no)
{
    if (no == 0)
    {
        printf("0");
        return;
    }
    if (no > 0)
    {
        no = -no;
    }

    for (int i = no; i <= -no; i++)
    {
        printf("%d ", i);
    }
}

int main()
{
    int uNo = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    printNumberLine(uNo);
    return 0;
}
