/* 2_2 practice count tax */

#include <stdio.h>

#define TAX_RATE 0.052f

int main(void)
{
    float amount, taxAdded;
    
    printf("Enter an amount: ");
    scanf("%f", &amount);

    taxAdded = amount * (TAX_RATE + 1.0f);
    
    printf("With tax added: %.2f\n", taxAdded);
    return 0;
}