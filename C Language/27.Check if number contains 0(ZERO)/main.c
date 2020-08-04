#include "header.h"

int main()
{
    int uNo = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    iRet = checkIsContainZero(uNo);
    if (iRet == TRUE)
    {
        printf("Number contains ZERO");
    }
    else
    {
        printf("Number doesn't contain ZERO");
    }

    return 0;
}