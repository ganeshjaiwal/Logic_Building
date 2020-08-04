#include "header.h"

int main()
{
    int uNo = 0, occur = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    occur = countEvenDigitsOccurances(uNo);
    printf("%d even digits there in %d.", occur, uNo);
    return 0;
}