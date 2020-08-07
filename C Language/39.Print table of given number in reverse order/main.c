#include <stdio.h>

void printTableOfNumberReverse(int);

int main()
{
    int uNo = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    printTableOfNumberReverse(uNo);
    return 0;
}

//================================================
// Name: printTableOfNumberReverse
// Input: int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Print table of given number
//================================================

void printTableOfNumberReverse(int no)
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
    for (int i = 10; i > 0; i--)
    {
        printf("%d \n", no * i);
    }
}