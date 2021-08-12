/* Read number and tell user if it is prime */

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program will tell you 1 number is prime or not. \n");
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i < n)
        printf("%d is divisible by %d \n", n, i);
    else
        printf("%d is prime \n", n);
    
    return 0;
}