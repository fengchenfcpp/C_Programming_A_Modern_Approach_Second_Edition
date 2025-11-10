/* Computes the dimensional weight of a box from input provided by the user, this is float build */

#include <stdio.h>

int main(void)
{
    float height, length, width, volume, weight;

    printf("Enter height of box: ");
    scanf("%f", &height);
    printf("Enter length of box: ");
    scanf("%f", &length);
    printf("Enter width of box: ");
    scanf("%f", &width);
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Volume (cubic inches): %f\n", volume);
    printf("Dimensional weight (pounds): %f\n", weight);

  return 0;
}