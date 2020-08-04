#include "header.h"

int main()
{
    int uNo = 0, occur = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    occur = countLessThan6Occurances(uNo);
    printf("%d digits are less than 6 in %d.", occur, uNo);
    return 0;
}