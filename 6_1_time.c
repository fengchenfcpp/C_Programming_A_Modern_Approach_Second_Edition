/* Counting time */

#include <stdio.h>

int main(void)
{
    int seconds, minutes, hours, days;
    long int total_seconds;

    printf("Enter the number of seconds: ");
    scanf("%ld", &total_seconds);

    days = total_seconds / 86400;
    hours = (total_seconds % 86400) / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("%ld seconds is equivalent to %d days, %d hours, %d minutes, and %d seconds.\n",
           total_seconds, days, hours, minutes, seconds);

    return 0;
}