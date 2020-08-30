#include <stdio.h>

void printNumbersFromRange(int, int);

int main()
{
    int min = 0.0, max = 0.0;
    printf("Enter range to print: ");
    scanf("%d%d", &min, &max);
    printNumbersFromRange(min, max);
    return 0;
}

//================================================
// Name: printNumbersFromRange
// Input: int, int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Prints numbers between given range
//================================================

void printNumbersFromRange(int min, int max)
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
        printf("%d ", i);
    }
}
