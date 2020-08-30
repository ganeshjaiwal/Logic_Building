#include <stdio.h>

int printEvenFactorialOfNumber(int);

int main()
{
    int uNo = 0, fact = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    fact = printEvenFactorialOfNumber(uNo);
    printf("Even factorial of %d is %d.", uNo, fact);
    return 0;
}

//================================================
// Name: printEvenFactorialOfNumber
// Input: int
// Output: int
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Return even factorial of number
//================================================

int printEvenFactorialOfNumber(int no)
{
    int fact = 1;
    if (no < 0)
    {
        no = -no;
    }
    if (no == 0)
    {
        return 0;
    }
    for (int i = 1; i <= no; i++)
    {
        if (i % 2 == 0)
        {
            fact *= i;
        }
    }
    return fact;
}