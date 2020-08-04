#include "header.h"

int main()
{
    int no1 = 0, no2 = 0, iRet = 0;
    printf("Please enter 2 number to check equality: ");
    scanf("%d%d", &no1, &no2);
    iRet = checkEqual(no1, no2);
    if (iRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}