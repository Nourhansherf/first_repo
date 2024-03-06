#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1 , num2 , sum=0;
    printf("inter two numbers : ");
    scanf("%d%d ",&num1, &num2);
    for(int i=num1;i<=num2;i++)
    {
        if (i%2!=0)
            sum+=i;
    }
    printf("the sum = %d",sum);
}
