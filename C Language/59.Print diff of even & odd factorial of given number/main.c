#include <stdio.h>

int printDiffBwEvenAndOddFactorialOfNumber(int);

int main()
{
    int uNo = 0, fact = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    fact = printDiffBwEvenAndOddFactorialOfNumber(uNo);
    printf("Difference between even and odd factorial of %d is %d.", uNo, fact);
    return 0;
}

//================================================
// Name: printDiffBwEvenAndOddFactorialOfNumber
// Input: int
// Output: int
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Return diff of even and odd factorial of number
//================================================

int printDiffBwEvenAndOddFactorialOfNumber(int no)
{
    int evenFact = 1;
    int oddFact = 1;
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
            evenFact *= i;
        }

        if (i % 2 != 0)
        {
            oddFact *= i;
        }
    }
    return evenFact - oddFact;
}