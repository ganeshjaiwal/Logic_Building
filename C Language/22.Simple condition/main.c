#include "header.h"

int main()
{
    int uNo = 0;
    int iRet = 0;
    printf("Enter number: ");
    scanf("%d", &uNo);
    iRet = checkGreater(uNo);
    if (iRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}