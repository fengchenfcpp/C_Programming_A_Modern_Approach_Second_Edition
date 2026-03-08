/* Countdown timer program */

#include <stdio.h>

int main()
{
    int i;
    printf("Enter the number of seconds for the countdown: ");
    scanf("%d", &i);
    do 
    {
        printf("%d\n", i);
        i--;
    } 
    while (i > 0);

    return 0;
}