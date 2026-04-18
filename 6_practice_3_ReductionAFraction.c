/* Enter a faction, and reduction of a fraction */

#include <stdio.h>

int main(void)
{
    int num, den, gcd, temp;

    printf("Enter a fraction (numerator/denominator): ");
    scanf("%d/%d", &num, &den);

    /* Find the greatest common divisor (GCD) */
    gcd = num < den ? num : den; // Start with the smaller of the two
    while (gcd > 0) {
        if (num % gcd == 0 && den % gcd == 0) {
            break; // Found the GCD
        }
        gcd--;
    }

    /* Reduce the fraction */
    num /= gcd;
    den /= gcd;

    printf("Reduced fraction: %d/%d\n", num, den);

    return 0;
}