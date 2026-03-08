/* Countdown timer program */

#include <stdio.h>
#include <unistd.h> // For sleep function

int main() 
{
    int seconds;

    printf("Enter the number of seconds for the countdown: ");
    scanf("%d", &seconds);

    while (seconds > 0) {
        printf("Time remaining: %d seconds\n", seconds);
        sleep(1); // Sleep for 1 second
        seconds--;
    }

    printf("Countdown complete!\n");
    return 0;
}