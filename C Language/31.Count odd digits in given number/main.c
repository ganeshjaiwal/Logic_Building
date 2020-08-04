#include "header.h"

int main()
{
    int uNo = 0, occur = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    occur = countOddDigitsOccurances(uNo);
    printf("%d odd digits there in %d.", occur, uNo);
    return 0;
}