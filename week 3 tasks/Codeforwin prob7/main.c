#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C,M,K;
    printf("Enter length in centimeter = ");
    scanf("%f",&C);
    M=C/100;
    K=M/1000;
    printf("\nLength in meter = %0.2f m",M);
    printf("\nLength in kilometer = %0.2f km",K);
    return 0;
}
