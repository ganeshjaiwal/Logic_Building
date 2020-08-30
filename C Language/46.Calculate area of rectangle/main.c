#include <stdio.h>

float calculateAreaOfRect(float, float);

int main()
{
    float width = 0.0, height = 0.0, area = 0.0;
    printf("Enter width: ");
    scanf("%f", &width);
    printf("Enter height: ");
    scanf("%f", &height);
    area = calculateAreaOfRect(width, height);
    printf("Area of rectangle is: %f ", area);
    return 0;
}

//================================================
// Name: calculateAreaOfRect
// Input: float, float
// Output: float
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Calsulate area of rectangle
//================================================

float calculateAreaOfRect(float width, float height)
{
    if (width < 0)
    {
        width = -width;
    }
    if (height < 0)
    {
        height = -height;
    }
    return width * height;
}