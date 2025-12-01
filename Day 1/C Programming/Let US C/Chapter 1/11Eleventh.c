#include <stdio.h>
#include <conio.h>

/*(k) A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer*/

/*This Program Was Done By Master Shekhar Sakat Student Of Master Of Computer Application MCA*/
int main()
{
    int tens,fifty,hundreds,amount;
    printf("\n\nTO Find The Total Number Of Currency Notes Of Each Denomination The Cashier Will have To Give to The Withdrawer\n");
    printf("\n\nEnter The Amount In Cash:");
    scanf("%d",&amount);

    printf("\nAmount in Cash is : Rs.%d\n",amount);

    tens = amount / 10;
    fifty = amount / 50;
    hundreds = amount / 100;

    printf("The Cashier Will Give This Number Of Denomination OF 10s,50s and 100 Rupees Notes To Withdrawer\n");
    printf("\nCashier Will Give : %d Number Of Notes Rs.10 Denomination To Withdrawer For the Amount : Rs.%d\n",tens,amount);
    printf("\nCashier Will Give : %d Number Of Notes Rs.10 Denomination To Withdrawer For the Amount : Rs.%d\n",fifty,amount);
    printf("\nCashier Will Give : %d Number Of Notes Rs.10 Denomination To Withdrawer For the Amount : Rs.%d\n",hundreds,amount);

    return 0;
}