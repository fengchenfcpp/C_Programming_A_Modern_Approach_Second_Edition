/* enter several date mm/dd/yyyy and calculate earliest and latest date*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char date[11]; // mm/dd/yyyy + null terminator
    char earliest[11] = "99/99/9999"; // Initialize to a very late date
    char latest[11] = "00/00/0000"; // Initialize to a very early date

    printf("Enter dates in mm/dd/yyyy format (type 'done' to finish):\n");
    while (1) {
        printf("Date: ");
        scanf("%s", date);
        if (strcmp(date, "done") == 0) {
            break;
        }
        if (strcmp(date, earliest) < 0) {
            strcpy(earliest, date);
        }
        if (strcmp(date, latest) > 0) {
            strcpy(latest, date);
        }
    }

    printf("Earliest date: %s\n", earliest);
    printf("Latest date: %s\n", latest);

    return 0;
}