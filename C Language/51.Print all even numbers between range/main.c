#include <stdio.h>

void printEvenNumbersFromRange(int, int);

int main()
{
    int min = 0.0, max = 0.0;
    printf("Enter range to print: ");
    scanf("%d%d", &min, &max);
    printEvenNumbersFromRange(min, max);
    return 0;
}

//================================================
// Name: printEvenNumbersFromRange
// Input: int, int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Prints all even numbers between given range
//================================================

void printEvenNumbersFromRange(int min, int max)
{
    if (min == max)
    {
        printf("Not valid range.");
    }
    if (min > max)
    {
        int temp = min;
        min = max;
        max = temp;
    }
    for (int i = min + 1; i < max; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}
