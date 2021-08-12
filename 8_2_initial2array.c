/* initial two-dimensional array */

#include <stdio.h>
#define N 10

int main(void)
{
    int ident[N][N];
    int row, col;

    for (row = 0; row < N; row++)
    {
        for (col = 0; col < N; col++)
        {
            if (row == col)
                ident[row][col] = 1;
            else
                ident[row][col] = 0;
        }
    }
    
    for (row = 0; row < N; row++)
    {
        for (col = 0; col < N; col++)
        {
            printf(" %d", ident[row][col]);   
        }
        printf(" \n");
    }

    return 0;
}
