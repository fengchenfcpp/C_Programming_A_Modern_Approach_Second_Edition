/* output the largest number from user's loop number data*/

#include <stdio.h>

int main(void)
{
    float number, largest;
    int count;
    printf("Enter the number of values you want to compare: ");
    scanf("%d", &count);
    if (count <= 0) {
        printf("Please enter a positive integer for the count.\n");
        return 1;
    }
    printf("Enter %d numbers:\n", count);
    scanf("%f", &largest);
    for (int i = 1; i < count; i++) {
        scanf("%f", &number);
        if (number > largest) {
            largest = number;
        }
    }
    printf("The largest number is: %.2f\n", largest);
    return 0;
}