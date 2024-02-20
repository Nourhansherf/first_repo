#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    float Quotient, Modulus;
    printf("Inter the first number: ");
    scanf("%d", &num1);
    printf("Inter the second one: ");
    scanf("%d", &num2);
    printf("Sum = %d \n", num1+num2);
    if(num1>num2)
        printf("Difference = %d \n", num1 - num2);
    else
        printf("Difference = %d \n",num2 - num1);
    printf("Product = %d \n", num1 * num2);
    if(num1 == 0 || num2 == 0)
        {
            printf("Quotient can't be calculated \n");
            printf("Modulus can't be calculated \n");
        }
    else if(num1>num2)
        {
            Quotient = num1 / num2;
            Modulus=num1 % num2;
            printf("Quotient = %0.2f \n", Quotient);
            printf("Modulus = %0.2f \n", Modulus);
        }
    else
        {
            Quotient=num2/num1;
            Modulus=num2 % num1;
            printf("Quotient = %0.2f \n", Quotient);
            printf("Modulus = %0.2f \n", Modulus);
        }

    return 0;
}
