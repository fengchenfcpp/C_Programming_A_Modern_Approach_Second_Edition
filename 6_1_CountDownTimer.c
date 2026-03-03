/* Countdown timer program */

#include <stdio.h>
#ifdef _WIN32
    #include <windows.h>
#endif

int main(void)
{
    int seconds;

    printf("Enter the number of seconds for the countdown: ");
    scanf("%d", &seconds);

    while (seconds >= 0)
    {
        int mins = seconds / 60;
        int secs = seconds % 60;
        printf("\r%02d:%02d", mins, secs);
        fflush(stdout); // Ensure the output is printed immediately
        if (seconds == 0)
            break;
        seconds--;
        // Sleep for 1 second (platform dependent)
        #ifdef _WIN32
            Sleep(1000);
        #else
            sleep(1);
        #endif
    }

    printf("\nCountdown finished!\n");
    return 0;
}