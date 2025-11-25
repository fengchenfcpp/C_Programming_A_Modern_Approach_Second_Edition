/* count cats number */

#include <stdio.h>

int main(void)
{
    int cat_count;
    printf("How many cats do you have?\n");
    scanf("%d", &cat_count);
    printf("Counting cats...\n");
    printf("You have %d cats!\n", cat_count);
    return 0;
}