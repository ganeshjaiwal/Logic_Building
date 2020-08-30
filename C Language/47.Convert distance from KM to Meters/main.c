#include <stdio.h>

float convertKMtoMeter(float);

int main()
{
    float kmDist = 0.0, mDist = 0.0;
    printf("Enter distance in kilometers: ");
    scanf("%f", &kmDist);
    mDist = convertKMtoMeter(kmDist);
    printf("%f KiloMeters is equal to %f meters: ", kmDist, mDist);
    return 0;
}

//================================================
// Name: convertKMtoMeter
// Input: float (distance in KM)
// Output: float (distance in meters)
// Author: Ganesh Narayan Jaiwal
// Date: 7 Aug 2020
// Description: Returns Converted distance fron KM to Meters
//================================================

float convertKMtoMeter(float km)
{
    if (km == 0.0)
    {
        return 0.0;
    }
    return km * 1000;
}
