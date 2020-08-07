#include <stdio.h>

void printSymbols(int);

int main()
{
    int uNo = 0;
    printf("Enter Number: ");
    scanf("%d", &uNo);
    printSymbols(uNo);
    return 0;
}

//================================================
// Name: printSymbols
// Input: int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Print $ * n number of times
//================================================

void printSymbols(int no)
{
    if (no < 0)
    {
        no = -no;
    }
    for (int i = 0; i < no; i++)
    {
        printf("$ * ");
    }
}