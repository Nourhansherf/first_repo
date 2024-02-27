#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    long long product=1ll;
    printf("Input number: ");
    scanf("%d", &num);
    product = (num == 0 ? 0 : 1ll);
    while(num != 0)
    {
        product = product * (num % 10);
        num = num / 10;
    }
    printf("Product of digits = %lld", product);
    return 0;
}
