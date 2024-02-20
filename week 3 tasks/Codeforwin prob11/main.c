#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    double base,exponent,power;
    printf("Enter base= ");
    scanf("%lf",&base);
    printf("\nEnter exponent = ");
    scanf("%lf",&exponent);
    power=pow(base,exponent);
    printf("\n%.2lf ^ %.2lf = %.2lf",base,exponent,power);
    return 0;
}
