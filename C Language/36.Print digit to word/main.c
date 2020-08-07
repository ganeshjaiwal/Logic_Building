#include <stdio.h>

void displayDigitToWord(int);

int main()
{
    int uDigi = 0;
    printf("Enter Digit: ");
    scanf("%d", &uDigi);
    displayDigitToWord(uDigi);
    return 0;
}

//================================================
// Name: displayDigitToWord
// Input: int
// Output: void
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Display digit to word
//================================================

void displayDigitToWord(int no)
{
    switch (no)
    {
    case 0:
        printf("Zero");
        break;
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
        break;
    default:
        printf("Invalid Number");
        break;
    }
}