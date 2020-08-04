#include "header.h"

int main()
{
    int uNo = 0, occur = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    occur = getDiffOfSumOfEvenAndOddDigits(uNo);
    printf("%d is the difference between sum of even and odd digits of %d.", occur, uNo);
    return 0;
}