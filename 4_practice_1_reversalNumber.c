/* output reversal 2 digital number */

#include <stdio.h>

int main() 
{
    int num, digit1, digit2;

    printf("Enter a 2-digit number: ");
    scanf("%d", &num);

    digit1 = num / 10;      // Extract the first digit
    digit2 = num % 10;      // Extract the second digit

    printf("Reversed number: %d%d\n", digit2, digit1);

    return 0;
}