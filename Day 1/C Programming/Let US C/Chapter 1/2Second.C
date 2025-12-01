#include <stdio.h>
#include <conio.h>
/*(b) The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters*/

/*This Program Was Done By Master Shekhar Sakat Student Of Master Of Computer Application MCA*/


int main()
{
    float dis,meters,feet,cent,inch;
    printf("\n\nTo COnvert the Distance Between Two Cities (in Km) Into Meters, Feet Feet Inches and Centimeters  "); 
    printf("Enter The Distance Between Two Cities (in Km) :");  //Prompt Lines
    scanf("%f",&dis); //Distance in Kiloneteres

    printf("\nThe Distance Between Two Cities in Kilometres is : %.2f Km\n",dis);

    //Converted Distance 

    meters = dis * 1000;
    cent = meters * 100;
    inch = cent / 2.54;
    feet = inch / 12;
    

    printf("\nFollowing Distance Of %.2f Kilometeres Converted  is As Follows :\n",dis);

    printf("\nDistance Between Two Cities (%.2f Kilometres) Converted into Metres is : %.2f Meters Unit\n",dis,meters);

    printf("\nDistance Between Two Cities (%.2f Kilometres) Converted into Metres is : %.2f Centimeters Unit\n",dis,cent);

    printf("\nDistance Between Two Cities (%.2f Kilometres) Converted into Metres is : %.2f Feet Unit\n",dis,feet);

    printf("\nDistance Between Two Cities (%.2f Kilometres) Converted into Metres is : %.2f  Inches Unit\n",dis,inch);
    
    
    
    
    return 0;
}