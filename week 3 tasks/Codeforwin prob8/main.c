#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C,K;
    printf("Enter temperature in Celsius = ");
    scanf("%f",&C);
    K=(C*9/5)+32;
    printf("Temperature in Fahrenheit = %0.2f F",K);
    return 0;
}
