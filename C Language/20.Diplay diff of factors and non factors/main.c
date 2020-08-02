#include "header.h"

int main()
{
    int uNo = 0;
    int uNonFactSum = 0;
    int uFactSum = 0;

    printf("Enter number: ");
    scanf("%d", &uNo);

    uNonFactSum = getSumOfNoFactors(uNo);
    uFactSum = getSumOfFactors(uNo);

    printf("Difference between sum of factrs and no factors: %d", uFactSum - uNonFactSum);

    return 0;
}