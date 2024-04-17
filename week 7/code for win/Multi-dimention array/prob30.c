#include <stdio.h>
void main()
{
    int A[3][3];
    int row, col, sum = 0;
    printf("Enter elements in matrix of size 3 x 3: \n");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    for (row = 0; row < 3; row++)
    {
        sum = 0;
        for (col = 0; col < 3; col++)
        {
            sum += A[row][col];
        }

        printf("Sum of elements of Row %d = %d\n", row + 1, sum);
    }
    for (row = 0; row < 3; row++)
    {
        sum = 0;
        for (col = 0; col < 3; col++)
        {
            sum += A[col][row];
        }

        printf("Sum of elements of Column %d = %d\n", row + 1, sum);
    }
}