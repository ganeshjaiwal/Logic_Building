#include <stdio.h>

int getFactorialOfNumber(int);

int main()
{
    int uNo = 0, factorial = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    factorial = getFactorialOfNumber(uNo);
    printf("Factorial of %d is %d.", uNo, factorial);
    return 0;
}

//================================================
// Name: getFactorialOfNumber
// Input: int
// Output: int
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: This function returns factorial of given number
//================================================

int getFactorialOfNumber(int no)
{
    if (no < 0)
    {
        no = -no;
    }
    if (no == 0)
    {
        return 0;
    }

    int fact = 1;
    for (int i = no; i > 0; i--)
    {
        fact *= i;
    }
    return fact;
}
