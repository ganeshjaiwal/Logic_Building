#include "header.h"

int main()
{
    int uNo = 0, occur = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    occur = countOccurancesBetween3And7(uNo);
    printf("%d digits are in between 3 and 7 in %d.", occur, uNo);
    return 0;
}