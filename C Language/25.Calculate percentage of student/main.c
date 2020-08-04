#include "header.h"

int main()
{
    int sMarksT = 0, sMarksO = 0;
    float percentage = 0.0;
    printf("Please enter total marks: ");
    scanf("%d", &sMarksT);
    printf("Please enter obtained marks: ");
    scanf("%d", &sMarksO);
    printf("Percentage Obtained: %f", calculatePercentage(sMarksT, sMarksO));
    return 0;
}