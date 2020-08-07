#include <stdio.h>

void printNumbers(int);

int main()
{
    int uNo = 0;
    printf("Enter Number: ");
    scanf("%d", &uNo);
    printNumbers(uNo);
    return 0;
}

//================================================
// Name: printNumbers
// Input: int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Prints numbers from 1 till given number
//================================================

void printNumbers(int no)
{
    if (no < 0)
    {
        no = -no;
    }
    for (int i = 1; i <= no; i++)
    {
        printf("%d ", i);
    }
}