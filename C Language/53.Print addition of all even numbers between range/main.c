#include <stdio.h>

int printAdditionOfEvenNumbersFromRange(int, int);

int main()
{
    int min = 0, max = 0, sum = 0;
    printf("Enter range to print: ");
    scanf("%d%d", &min, &max);
    sum = printAdditionOfEvenNumbersFromRange(min, max);
    printf("Sum of all numbers is: %d.", sum);
    return 0;
}

//================================================
// Name: printAdditionOfEvenNumbersFromRange
// Input: int, int
// Output: int
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Prints addition of all numbers between given range
//================================================

int printAdditionOfEvenNumbersFromRange(int min, int max)
{
    int sum = 0;
    if (min == max)
    {
        printf("Not valid range.");
        return 0;
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
            sum += i;
        }
    }
    return sum;
}
