#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, fact=1;
    printf("inter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        fact*=i;
    }
    printf("fact of %d = %d",num, fact);
    return 0;
}
