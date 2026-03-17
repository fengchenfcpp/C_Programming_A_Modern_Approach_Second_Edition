/* sample for continue, list odd number */

#include <stdio.h>

int main(void)
{
    int i,n;
    printf("List odd numbers between 0 and your input number: \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}