#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    printf("input number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
            printf("%d\n", i);
    }
    return 0;
}
