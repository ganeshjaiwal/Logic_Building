#include "header.h"

int main()
{
    int uNo = 0, mult = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    mult = multiplyAllDigits(uNo);
    printf("%d is the multipliction of all digits in %d.", mult, uNo);
    return 0;
}