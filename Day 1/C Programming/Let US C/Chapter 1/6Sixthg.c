#include <stdio.h>
#include <conio.h>

/*(f) Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.*/

/*This Program Was Done By Master Shekhar Sakat Student Of Master Of Computer Application MCA*/

int main()
{
    int c, d;
    printf("\nInterchanging Of TWo Numbers By Interchanging Contents Locations\n");
    printf("\nEnter The Location C and D :");
    scanf("%d %d",&c,&d);

    printf("\nBefore Interchanging :\n");
    printf("\nValue Of C is : %d\n",c);
    printf("\nValue Of D is : %d\n",d);

    //Interchanging

    c = c + d;
    d = c - d;
    c = c - d;

    printf("\nAfter Interchanging :\n");
    printf("\nValue Of C is : %d\n",c);
    printf("\nValue Of D is : %d\n",d);



    return 0;
}