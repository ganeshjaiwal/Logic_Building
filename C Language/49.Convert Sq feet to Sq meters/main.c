#include <stdio.h>

float convertSqFeetToSqMeters(float);

int main()
{
    float sqFeet = 0.0, sqMeters = 0.0;
    printf("Enter area in square feet: ");
    scanf("%f", &sqFeet);
    sqMeters = convertSqFeetToSqMeters(sqFeet);
    printf("Area %f square feet is equal to %f square meters", sqFeet, sqMeters);
    return 0;
}

//================================================
// Name: convertSqFeetToSqMeters
// Input: float
// Output: float
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Convert square feet to square meters
//================================================

float convertSqFeetToSqMeters(float sqFeet)
{
    if (sqFeet < 0)
    {
        sqFeet = -sqFeet;
    }
    return sqFeet * 0.0929;
}
