#include <stdio.h>

/* 
m) If a five-digit number is input through the keyboard, write a
program to print a new number by adding one to each of its
digits. For example, if the number that is input is 12391 then
the output should be displayed as 23402.
*/

/*This Program Was Done By Master Shekhar Sakat Student Of Master Of Computer Application MCA*/
int main()
{
    int d1, d2, d3, d4, d5, sum = 0, n, n1;

    printf("\n\nTo Calculate A New Number By Adding One To Each of Its Digits\n");
    printf("\nEnter Any 5-Digit Number: ");
    scanf("%d", &n);

    // Validate input to ensure it's a 5-digit number
    if (n < 10000 || n > 99999) {
        printf("\nPlease enter a valid 5-digit number.\n");
        return 1;  // Exit the program if input is invalid
    }

    n1 = n;  // Store original number for output
    printf("\nThe 5-Digit Number Entered By You is: %d\n", n);

    // Digit Separation and Increment Logic
    d5 = n % 10;  // Extract the 1st digit (rightmost)
    n = n / 10;
    d5 = (d5 + 1) % 10;  // Add 1 and handle carry

    d4 = n % 10;
    n = n / 10;
    d4 = (d4 + 1) % 10;  // Add 1 and handle carry

    d3 = n % 10;
    n = n / 10;
    d3 = (d3 + 1) % 10;  // Add 1 and handle carry

    d2 = n % 10;
    n = n / 10;
    d2 = (d2 + 1) % 10;  // Add 1 and handle carry

    d1 = n % 10;
    n = n / 10;
    d1 = (d1 + 1) % 10;  // Add 1 and handle carry

    // Calculate the sum
    sum = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;
    printf("\nNew Number After Adding 1 to Each Digit: %d\n", sum);

    return 0;
}
