#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length,width,Area;
    printf("Enter length : ");
    scanf("%f",&length);
    printf("\nEnter width : ");
    scanf("%f",&width);
    Area=length*width;
    printf("\nArea of rectangle = %0.2f sq. unit",Area);
    return 0;
}
