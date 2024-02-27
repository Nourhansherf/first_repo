#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alpha;
    printf("Input character : ");
    scanf("%c",&alpha);
    if(alpha=='a' || alpha=='e' || alpha=='o' ||alpha=='i' || alpha=='u')
        printf("'%c' is vowel",alpha);
    else
        printf("'%c' is not vowel",alpha);
    return 0;
}
