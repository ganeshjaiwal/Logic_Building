#include <stdio.h>

void printTableOfNumber(int);

int main()
{
    int uNo = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    printTableOfNumber(uNo);
    return 0;
}

//================================================
// Name: printTableOfNumber
// Input: int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Print table of given number
//================================================

void printTableOfNumber(int no)
{
    if (no == 0)
    {
        printf("Enter valid input");
        return;
    }

    if (no < 0)
    {
        no = -no;
    }
    for (int i = 1; i < 11; i++)
    {
        printf("%d \n", no * i);
    }
}