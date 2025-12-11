/* Input and print magic square */

#include <stdio.h>

int main(void)
{
    int magic_square[4][4];
    int row, col;

    printf("Enter a 4x4 magic square row by row (16 numbers):\n");

    for (row = 0; row < 4; row++) {
        for (col = 0; col < 4; col++) {
            scanf("%d", &magic_square[row][col]);
        }
    }

    printf("The magic square you entered is:\n");
    for (row = 0; row < 4; row++) {
        for (col = 0; col < 4; col++) {
            printf("%4d", magic_square[row][col]);
        }
        printf("\n");
    }

    return 0;
}