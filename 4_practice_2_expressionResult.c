/* Print expression results */

#include <stdio.h>

int main() 
{
    int i, j, k;
    i = 7; j = 8; k = 9;
    printf("%d %d\n", i/j, i%j);
    printf("%d\n", (i + 10) % j);
    printf("%d\n", (i + 10) % j);
    printf("%d\n", (i + 5) % (j + 2) / k);
    return 0;
}