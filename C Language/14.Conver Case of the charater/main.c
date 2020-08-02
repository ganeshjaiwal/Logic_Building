#include "header.h"

int main()
{
    char uCh = '\0';
    printf("Enter any character: ");
    scanf("%c", &uCh);
    printf("Converted character is: %c", converCharaterCase(uCh));
    return 0;
}