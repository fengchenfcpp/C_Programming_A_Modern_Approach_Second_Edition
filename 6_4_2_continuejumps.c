/* Jumps outside when user input 0 */

#include <stdio.h>

int main(void)
{
    int n, sum, i;

    n = 0;
    sum = 0;

    while (n < 10)
    {
        scanf("%d",  &i);
        if (i == 0)
        {
            continue;
        }
        sum += i;
        n++;
    }
    printf("sum number is %d", sum);
    
    return 0;
}