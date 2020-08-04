#include "header.h"

int main()
{
    int uNo1 = 0, uNo2 = 0, uNo3 = 0;
    printf("Enter 3 numbers to multiply: ");
    scanf("%d%d%d", &uNo1, &uNo2, &uNo3);
    printf("Multiplication of %d, %d, %d is: %d", uNo1, uNo2, uNo3, multiply(uNo1, uNo2, uNo3));
    return 0;
}