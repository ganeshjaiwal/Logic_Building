#include <stdio.h>

float converFahrenheitToCelsius(float);

int main()
{
    float fer = 0.0, cel = 0.0;
    printf("Enter temprature in fahrenheit: ");
    scanf("%f", &fer);
    cel = converFahrenheitToCelsius(fer);
    printf("%f Fahrenheit is equal to %f celsius.", fer, cel);
    return 0;
}

//================================================
// Name: converFahrenheitToCelsius
// Input: float
// Output: float
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Convert from fahrenheit to celsius
//================================================

float converFahrenheitToCelsius(float f)
{
    return ((float)(f - 32.0) * (float)(5.0 / 9.0));
}
