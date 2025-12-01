#include <stdio.h>
#include <conio.h>

/*Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees*/
/*This Program Was Done By Master Shekhar Sakat Student Of Master Of Computer Application MCA*/
int main()
{
    float fr,cel;
    printf("\n\nTo Convert The Temperature Fahrenheit Into Centigrade Degrees\n");
    printf("\n\nEnter The Temperature in Fahrenheit : ");
    scanf("%f",fr);

    printf("\nTemperature Entered is in : %.2f F Degrees\n",fr);

    cel = (fr - 32) * 5 / 9;

    printf("\nTemperature  Fahrenheit %.2f F Converted Into Celsius is : %.2f Celsius\n",fr,cel);

    return 0;
}