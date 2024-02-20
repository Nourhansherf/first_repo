#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    double root,num;
    printf("Enter a number : ");
    scanf("%lf",&num);
    root=sqrt(num);
    printf("\nsquare root of %0.2lf = %0.2lf", num,root);
    return 0;
}
