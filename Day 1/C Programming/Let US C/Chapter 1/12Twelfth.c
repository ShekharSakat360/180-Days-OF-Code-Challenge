#include <stdio.h>
#include <conio.h>

/*(l) If the total selling price of 15 items and the total profit earned
on them is input through the keyboard, write a program to
find the cost price of one item.*/

/*This Program Was Done By Master Shekhar Sakat Student Of Master Of Computer Application MCA*/
int main()
{
    int selling_price,total_profit,totalCost;
    float cost;
    printf("\nTo Find The Cost Price Of One Item\n");
    printf("\n\nEnter The Total Selling Price Of 15 Items :");
    scanf("%d",&selling_price);

    printf("\n\nEnter The Total Profit Earned  :");
    scanf("%d",&total_profit);

    printf("\nTotal Selling Price Of 15 Items is : %d\n",selling_price);
    printf("\nTotal Profit Earned is : %d\n",total_profit);


    //TotalCost PRice Of 15 item
    totalCost = selling_price - total_profit;
    //Cost Price Of 1 Item
    cost = totalCost / 15;

    printf("\nTotal Cost Price Of One Item is : Rs.%.2f\n",cost);
    return 0;
}