#include "header.h"

int main()
{
    int uNo = 0;
    int uSum = 0;

    printf("Enter number: ");
    scanf("%d", &uNo);

    uSum = getSumOfNoFactors(uNo);

    printf("Sum of non factor numbers is: %d", uSum);

    return 0;
}