/* Phone number format transfer */

#include <stdio.h>

int main(void)
{
    int area_code, exchange, line_number;

    printf("Enter phone number (xxx-xxx-xxxx): ");
    scanf("%d-%d-%d", &area_code, &exchange, &line_number);

    printf("You entered (%d) %d-%d\n", area_code, exchange, line_number);

    return 0;
}