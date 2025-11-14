/* 2_2 practice count different dollar number*/

#include <stdio.h>

int main(void)
{
    int dollar, count_20, count_10, count_5, count_1;
    
    printf("Enter dollar amount: ");
    scanf("%d", &dollar);
    
    count_20 = dollar / 20;
    dollar = dollar % 20;
    
    count_10 = dollar / 10;
    dollar = dollar % 10;
    
    count_5 = dollar / 5;
    dollar = dollar % 5;
    
    count_1 = dollar;
    
    printf("$20 bills: %d\n", count_20);
    printf("$10 bills: %d\n", count_10);
    printf("$5 bills: %d\n", count_5);
    printf("$1 bills: %d\n", count_1);
    
    return 0;
}