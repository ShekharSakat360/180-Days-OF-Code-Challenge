#include <stdio.h>
#include <conio.h>
/*c) If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100.*/

/*This Program Was Done By Master Shekhar Sakat Student Of Master Of Computer Application MCA*/
int main()
{
    int s1,s2,s3,s4,s5; //Marks Of Student in 5 Different Subjects
    float agg,per; //Aggregate and Percentage

    printf("\nTo Calculate The Aggregate Marks and Percentage Marks Obtained By The Student\n"); //Output Lines
    printf("\n\nEnter The 5 Subject Marks :"); //PRompt Lines
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);  //Input Lines

    printf("\n1st Subject English     Marks is : %d Out Of 100\n",s1);
    printf("\n2nd Subject Marathi     Marks is : %d Out Of 100\n",s2);
    printf("\n3rd Subject Mathematics Marks is : %d Out Of 100\n",s3);
    printf("\n4th Subject History     Marks is : %d Out Of 100\n",s4);
    printf("\n5th Subject Geography   Marks is : %d Out Of 100\n",s5);


    //Aggregate Marks
    
    agg = s1 + s2 + s3 + s4 + s5 ; //total
    per = agg / 5;

    printf("\nTotal Aggregate Marks Of 5 Subject is : %.f Marks\n",agg);
    printf("\nPercentage Obtained is : %.2f Percentage \n",per);



    



    

    return 0;
}