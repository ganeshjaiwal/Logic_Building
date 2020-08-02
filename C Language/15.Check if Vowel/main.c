#include "header.h"

int main()
{
    char uCh = '\0';
    printf("Enter any character: ");
    scanf("%c", &uCh);
    if (chechIfVowel(uCh))
    {
        printf("Entered character is vowel.");
    }
    else
    {
        printf("Entered character is not vowel.");
    }

    return 0;
}