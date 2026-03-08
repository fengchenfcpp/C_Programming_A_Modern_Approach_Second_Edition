/* Sum a series of numbers. */

#include <stdio.h>

int main(void) 
{
    double sum = 0.0, value;
    printf("Enter a series of numbers, terminated by any non-numeric input:\n");

    while (scanf("%lf", &value) == 1) {
        sum += value;
    }

    printf("The sum is: %lf\n", sum);
    return 0;
}