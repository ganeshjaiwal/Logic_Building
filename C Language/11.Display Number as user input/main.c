#include "header.h"

int main()
{
    int iValue = 0, iFreq = 0;
    printf("Enter number to print: ");
    scanf("%d", &iValue);
    printf("Enter frequency to print: ");
    scanf("%d", &iFreq);

    Display(iValue, iFreq);

    return 0;
}
