#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    long long binary, decimal=0, temp;
    int N=0;

    printf("Enter any binary number: ");
    scanf("%lld", &binary);

    temp = binary;

    while(temp!=0)
    {
        if(temp % 10 == 1)
        {
            decimal += pow(2, N);
        }
        N++;
        temp /= 10;
    }
    printf("Decimal number= %lld", decimal);
    return 0;
}
