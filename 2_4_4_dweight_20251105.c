/* Computes the dimensinal weight of a 28*26*24 box */

# include <stdio.h>
int main(void)
{
    int height, length, width, volume, weight;

    height = 24;
    length = 28;
    width = 26;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    printf("I need a job.\n");

    return 0;
}