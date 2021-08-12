/* Prints a countdown */

#include <stdio.h>

void print_count(int n)
{
    printf("T mins %d and counting\n", n);
}

int main(void)
{
    int i;

    for (i = 10; i > 0; --i)
    {
        print_count(i);
    }
    
    return 0;
}