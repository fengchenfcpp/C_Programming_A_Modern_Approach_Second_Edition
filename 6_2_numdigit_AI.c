/* Calculates the number of digits in an integer */

#include <stdio.h>

int main () 
{
    int number, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handle the case for 0
    if (number == 0) {
        count = 1;
    } else {
        // Count the digits
        while (number != 0) {
            number /= 10; // Remove the last digit
            count++;      // Increment the count
        }
    }

    printf("Number of digits: %d\n", count);
    return 0;
}