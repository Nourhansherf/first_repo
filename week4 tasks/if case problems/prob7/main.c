#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alpha;
    printf("Input character: ");
    scanf("%c",&alpha);
    if(alpha>='a' && alpha<='z')
        printf("'%c' is alphabet",alpha);
    else
        printf("'%c' is not alphabet",alpha);
    return 0;
}
