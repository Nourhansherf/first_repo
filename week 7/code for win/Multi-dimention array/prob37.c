#include <stdio.h>
void main()
{
    int A[2][2];
    int row, col;
    long det;
    printf("Enter elements in matrix of size 2x2: \n");
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 2; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
    printf("Determinant of the matrix = %ld", det);
}