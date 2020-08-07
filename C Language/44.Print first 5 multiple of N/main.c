#include <stdio.h>

void print1St5Multiples(int);

int main()
{
    int uNo = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    print1St5Multiples(uNo);
    return 0;
}

//================================================
// Name: print1St5Multiples
// Input: int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Print first 5 multiple of given number
//================================================

void print1St5Multiples(int no)
{
    if (no == 0)
    {
        printf("Enter valid number.");
    }
    if (no < 0)
    {
        no = -no;
    }
    for (int i = 1; i < 6; i++)
    {
        printf("%d ", no * i);
    }
}