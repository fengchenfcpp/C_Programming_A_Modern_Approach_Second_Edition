/* 2_2 practice count ball volumn */

#include <stdio.h>

#define PI 3.14f
#define SCALE_FACTOR (4.0f / 3.0f)

int main(void)
{
    float radius, volumn;
    
    printf("Enter radius: ");
    scanf("%f", &radius);

    volumn = SCALE_FACTOR * PI * radius * radius * radius;
    
    printf("Volumn of the ball: %.2f\n", volumn);
    return 0;
}