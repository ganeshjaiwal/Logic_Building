#include <stdio.h>

void printOddTillN(int);

int main()
{
    int uNo = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    printOddTillN(uNo);
    return 0;
}

//================================================
// Name: printOddTillN
// Input: int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Print all odd numbers from 1 till N
//================================================

void printOddTillN(int no)
{
    if (no == 0)
    {
        return;
    }
    if (no < 0)
    {
        no = -no;
    }
    for (int i = 1; i <= no; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
}