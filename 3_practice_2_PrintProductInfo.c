/* Print product information */

#include <stdio.h>

int main(void)
{
    int item, purchase_date;
    float unit_price;
    printf("Enter item number: (3 digits) ");
    scanf("%d", &item);
    printf("Enter unit price: (max 9999.99) ");
    scanf("%f", &unit_price);
    printf("Enter purchase date: (yyyymmdd)");
    scanf("%d", &purchase_date);
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    printf("%03d\t$%6.2f\t%08d\n", item, unit_price, purchase_date);

    return 0;
}