/* output calendar for this month */

#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);

    int month = tm->tm_mon; // 0-11
    int year = tm->tm_year + 1900; // years since 1900

    // Get the first day of the month
    struct tm first_day = {0};
    first_day.tm_year = year - 1900;
    first_day.tm_mon = month;
    first_day.tm_mday = 1;
    mktime(&first_day); // Normalize the structure

    int start_day = first_day.tm_wday; // 0-6, Sunday=0
    int days_in_month;

    // Determine the number of days in the month
    if (month == 1) { // February
        days_in_month = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    } else if (month == 3 || month == 5 || month == 8 || month == 10) { // April, June, September, November
        days_in_month = 30;
    } else {
        days_in_month = 31;
    }

    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    // Print leading spaces for the first week
    for (int i = 0; i < start_day; i++) {
        printf("    ");
    }

    // Print the days of the month
    for (int day = 1; day <= days_in_month; day++) {
        printf("%3d ", day);
        if ((start_day + day) % 7 == 0) {
            printf("\n"); // New line after Saturday
        }
    }
    printf("\n");

    return 0;
}