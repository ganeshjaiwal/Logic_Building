#include <stdio.h>

#define PI 3.14

float calculateAreaOfCirle(float);

int main()
{
    float radius = 0.0, area = 0.0;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    area = calculateAreaOfCirle(radius);
    printf("Area of circle for radius %f is %f", radius, area);
    return 0;
}

//================================================
// Name: calculateAreaOfCirle
// Input: float
// Output: float
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Accepts radius and calculates area of circle
//================================================

float calculateAreaOfCirle(float rad)
{
    // No matter if user provide radius as negetive value
    return PI * rad * rad;
}