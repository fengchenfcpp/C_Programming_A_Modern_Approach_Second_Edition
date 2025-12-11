/* count two fractions plus */

#include <stdio.h>

int main(void)
{
    int numerator1, denominator1;
    int numerator2, denominator2;
    int result_numerator, result_denominator;

    printf("Enter first fraction (numerator and denominator): ");
    scanf("%d %d", &numerator1, &denominator1);

    printf("Enter second fraction (numerator and denominator): ");
    scanf("%d %d", &numerator2, &denominator2);

    result_numerator = numerator1 * denominator2 + numerator2 * denominator1;
    result_denominator = denominator1 * denominator2;

    printf("The sum of the two fractions is: %d/%d\n", result_numerator, result_denominator);

    return 0;
}