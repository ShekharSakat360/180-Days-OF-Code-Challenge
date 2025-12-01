#include<stdio.h>
#include<conio.h>
/*Write C programs for the following:
(a) Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.*/

/*This Program Was Done By Master Shekhar Sakat Student Of Master Of Computer Application MCA*/

int main()
{
    
    float bs,gs,hra,da; //Gross Salary Basic salary houserent allowance
    printf("\n\nTo Calculate Ramesh's Gross Salary");
    printf("\n\nEnter Ramesh Basic Salary : ");
    scanf("%f",&bs);

    printf("\nRamesh's Basic Salary is : Rs. %.2f\n",bs);

    //DA
    hra = 0.4 * bs;
    da = 0.2 * hra;

    gs = bs + hra  + da;

    printf("\nRamesh's Gross Salary is : Rs. %.2f\n",gs);
    return 0;
}