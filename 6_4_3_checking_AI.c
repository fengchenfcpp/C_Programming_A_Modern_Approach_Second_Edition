/* Balances a checkbook */

#include <stdio.h>

int main(void)
{
    float balance, charge, credit;
    char transaction_type;

    printf("Enter the beginning balance: ");
    scanf("%f", &balance);

    while (1) {
        printf("Enter transaction type (C for charge, R for credit, Q to quit): ");
        scanf(" %c", &transaction_type);

        if (transaction_type == 'Q' || transaction_type == 'q') {
            break;
        }

        if (transaction_type == 'C' || transaction_type == 'c') {
            printf("Enter charge amount: ");
            scanf("%f", &charge);
            balance += charge;
        } else if (transaction_type == 'R' || transaction_type == 'r') {
            printf("Enter credit amount: ");
            scanf("%f", &credit);
            balance -= credit;
        } else {
            printf("Invalid transaction type. Please try again.\n");
        }
    }

    printf("Final balance: %.2f\n", balance);
    return 0;
}