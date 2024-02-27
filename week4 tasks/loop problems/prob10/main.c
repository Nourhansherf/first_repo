#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long num;
    int count = 0;
    printf("Enter any number: ");
    scanf("%lld", &num);
    do
    {
        count++;
        num /= 10;
    } while(num != 0);
    printf("num of digits: %d", count);
    return 0;
}
