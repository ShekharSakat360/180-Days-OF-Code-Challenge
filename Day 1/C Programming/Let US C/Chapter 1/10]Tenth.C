#include <stdio.h>
#include <conio.h>
/*In a town, the percentage of men is 52. The percentage of
total literacy is 48. If total percentage of literate men is 35 of
the total population, write a program to find the total numberof illiterate men and women if the population of the town is
80,000.*/

/*This Program Was Done By Master Shekhar Sakat Student Of Master Of Computer Application MCA*/
int main() 
{
    int total_population = 80000;
    float percentage_men = 52.0;
    float literacy_rate = 48.0;
    float literate_men_rate = 35.0;

    // Calculate the number of men and women
    int men = (total_population * percentage_men) / 100;
    int women = total_population - men;

    // Calculate the number of literate people
    int literate_people = (total_population * literacy_rate) / 100;

    // Calculate the number of literate men
    int literate_men = (total_population * literate_men_rate) / 100;

    // Calculate the number of illiterate men and women
    int illiterate_men = men - literate_men;
    int illiterate_women = women - (literate_people - literate_men);

    // Print the results
    printf("Illiterate Men: %d\n", illiterate_men);
    printf("Illiterate Women: %d\n", illiterate_women);

    return 0;
}
