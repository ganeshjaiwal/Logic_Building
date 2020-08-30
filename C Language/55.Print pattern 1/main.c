#include <stdio.h>

void printPattern(int);

int main()
{
    int uNo = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    printPattern(uNo);
    return 0;
}

//================================================
// Name: printPattern
// Input: int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Prints pattern # # # # * * * *
//================================================

void printPattern(int no)
{
    if (no < 0)
    {
        no = -no;
    }
    for (int i = 0; i < no; i++)
    {
        printf("# ");
    }
    for (int i = 0; i < no; i++)
    {
        printf("* ");
    }
}