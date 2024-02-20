#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length,Width,Perimeter;
    printf("Inter Length : ");
    scanf("%f",&length);
    printf("\nInter width : ");
    scanf("%f",&Width);
    Perimeter=2*(length+Width);
    printf("\nPerimeter of rectangle = %0.2f \n",Perimeter);
    return 0;
}
