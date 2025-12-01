#include <stdio.h>
#include <conio.h>

/*(i) If a four-digit number is input through the keyboard, write a
program to obtain the sum of the first and last digit of this
number.*/

/*This Program Was Done By Master Shekhar Sakat Student Of Master Of Computer Application MCA*/s

int main()
{
    int d1,d2,d3,d4,d5,sum=0,n,n1;

    printf("\n\nTo Calculate The Sum Of 4 Digit Number which is Only First and Last Digit  \n");
    printf("\n\nEnter Any 4 Digit Number :");
    scanf("%d",&n);
    n1 = n;
    printf("\nThe 4 Digit Number Entered By You is : %d\n",n);

    //Digit Seperation Logic

    
    d4 = n % 10;
    n = n / 10;

    d3 = n % 10;
    n = n / 10;

    d2 = n % 10;
    n = n / 10;

    d1 = n % 10;
    n = n / 10;

    sum = d1 + d4;
    printf("\nSum Of 5 Digit Number %d is : %d\n",n1,sum);





    return 0;
}
