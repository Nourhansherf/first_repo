#include <stdio.h>
void main()
{
    int A[3][3];
    int B[3][3];
    int row, col, isSymmetric;
    printf("Enter elements in matrix of size 3x3: \n");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            B[row][col] = A[col][row];
        }
    }
    isSymmetric = 1;
    for (row = 0; row < 3 && isSymmetric; row++)
    {
        for (col = 0; col < 3; col++)
        {
            if (A[row][col] != B[row][col])
            {
                isSymmetric = 0;
                break;
            }
        }
    }
    if (isSymmetric == 1)
    {
        printf("\nThe given matrix is Symmetric matrix: \n");
    }
    else
    {
        printf("\nThe given matrix is not Symmetric matrix.");
    }
}