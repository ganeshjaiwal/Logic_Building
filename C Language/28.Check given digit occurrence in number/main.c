#include "header.h"

int main()
{
    int uNo = 0, uDigi = 0, occur = 0;
    printf("Enter Number: ");
    scanf("%d", &uNo);
    printf("Enter digit to check: ");
    scanf("%d", &uDigi);
    occur = checkDigitOccurences(uNo, uDigi);
    printf("%d is Occured %d times in %d.", uDigi, occur, uNo);
    return 0;
}