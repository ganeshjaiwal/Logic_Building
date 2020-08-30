#include <stdio.h>

float convertToRupee(float);

int main()
{
    float dollar = 0.0, rupee = 0.0;
    printf("Enter amount in dollar: ");
    scanf("%f", &dollar);
    rupee = convertToRupee(dollar);
    printf("$%f is equal to %f rupee", dollar, rupee);
    return 0;
}

//================================================
// Name: convertToRupee
// Input: float
// Output: float
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Convert dollar to rupee
//================================================

float convertToRupee(float dollar)
{
    if (dollar < 0.0)
    {
        dollar = -dollar;
    }
    return dollar * 70;
}
