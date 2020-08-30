#include <stdio.h>

int printOddFactorialOfNumber(int);

int main()
{
    int uNo = 0, fact = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    fact = printOddFactorialOfNumber(uNo);
    printf("Odd factorial of %d is %d.", uNo, fact);
    return 0;
}

//================================================
// Name: printOddFactorialOfNumber
// Input: int
// Output: int
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Return odd factorial of number
//================================================

int printOddFactorialOfNumber(int no)
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
        if (i % 2 != 0)
        {
            fact *= i;
        }
    }
    return fact;
}