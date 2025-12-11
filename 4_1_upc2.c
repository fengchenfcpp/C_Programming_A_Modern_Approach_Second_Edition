/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main() 
{
    int digit, sum_odd = 0, sum_even = 0, total_sum, check_digit;

    printf("Enter the first 11 digits of a UPC: ");

    for (int i = 1; i <= 11; i++) {
        scanf("%1d", &digit);
        if (i % 2 == 1) {
            sum_odd += digit;
        } else {
            sum_even += digit;
        }
    }

    total_sum = (sum_odd * 3) + sum_even;
    check_digit = (10 - (total_sum % 10)) % 10;

    printf("The check digit is: %d\n", check_digit);

    return 0;
}