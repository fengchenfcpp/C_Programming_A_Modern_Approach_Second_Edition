/* 2_2 practice count loan*/

int main(void)
{
    int loan, years;
    double rate, total_amount, monthly_payment;
    
    printf("Enter loan amount: ");
    scanf("%d", &loan);
    
    printf("Enter number of years: ");
    scanf("%d", &years);
    
    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);
    
    rate = rate / 100; // Convert percentage to decimal
    total_amount = loan * (1 + rate * years); // Simple interest calculation
    monthly_payment = total_amount / (years * 12); // Total months
    
    printf("Total amount to be paid: $%.2f\n", total_amount);
    printf("Monthly payment: $%.2f\n", monthly_payment);
    
    return 0;
}