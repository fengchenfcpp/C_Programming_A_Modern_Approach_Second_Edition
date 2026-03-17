/* countdown timer with For loop */

#include <stdio.h>

int main ()
{
    int i;
    printf("Enter the number of seconds for the countdown: ");
    scanf("%d", &i);
    
    for ( ; i > 0; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}