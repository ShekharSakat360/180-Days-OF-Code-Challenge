#include <stdio.h>
#include <conio.h>
#define PI 3.142

/*(e) The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.*/
/*This Program Was Done By Master Shekhar Sakat Student Of Master Of Computer Application MCA*/

int main()
{
    float length,breadth,areaRect,areaCirc,Circum,radius,peri;
    printf("\nTo Calculate The Area and Perimeter Of Rectangle And The Area and Circumference Of Circle");
    printf("\nArea Of Rectangle and Perimeter Of Rectangle\n");
    printf("\n\nEnter The Length and BReadth  OF Rectangle :");
    scanf("%f %f", &length,&breadth);

    printf("\nLength Of Rectangle is : %.2f Units \n",length);
    printf("\nLength Of Rectangle is : %.2f Units \n",breadth);

    //Area of Rectangle 
    areaRect = length * breadth;
    peri  = 2 * (length + breadth);

    printf("\nArea Of      Rectangle is : %.2f Units\n",areaRect);
    printf("\nPerimeter Of Rectangle is : %.2f Units\n",peri);


    printf("\n\nArea Of Circle and Circumference oF circle\n");
    printf("\n\nEnter The Radius OF Circle :");
    scanf("%f",&radius);

    printf("\nRadius OF Circle is : %.2f UNits\n",radius);

    //Area Of Circle
    areaCirc = PI * radius * radius;
    Circum = 2 * PI * radius;

    printf("\nArea          Of Circle is : %.2f Units\n",areaCirc);
    printf("\nCircumference Of Circle is : %.2f Units\n",Circum);
    
    
    return 0;
}