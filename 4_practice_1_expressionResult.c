#include <stdio.h>

int main(void)
{
    int i, j, k;
    i = 5;
    j = 3;
    k = 9;

    printf("%d %d\n", i / j, i % j);
    printf("%d\n", (i + 10) % j);
    printf("%d\n", (i + 10) % k / j);
    printf("%d\n", (i + 5) % (j + 2) / k);

    return 0;
}