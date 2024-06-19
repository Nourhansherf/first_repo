#include <stdio.h>

#define ROW 3
#define COL 3
void matrixInput(int mat[][COL]);
void matrixPrint(int mat[][COL]);
void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL]);
int main()
{
    int mat1[ROW][COL];
    int mat2[ROW][COL];
    int product[ROW][COL];
    printf("Enter elements in first matrix of size %dx%d\n", ROW, COL);
    matrixInput(mat1);
    printf("Enter elements in second matrix of size %dx%d\n", ROW, COL);
    matrixInput(mat2);
    matrixMultiply(mat1, mat2, product);
    printf("Product of both matrices is : \n");
    matrixPrint(product);
    return 0;
}