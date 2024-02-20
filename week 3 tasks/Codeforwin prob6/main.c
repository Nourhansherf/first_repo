#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius,Area,Circumference;
    const float Pi=3.14;
    printf("Enter radius : ");
    scanf("%f",&radius);
    Area=Pi*radius*radius;
    Circumference=2*Pi*radius;
    printf("\nDiameter = %0.2f Units",2*radius);
    printf("\nCircumference = %0.2f Units",Circumference);
    printf("\nArea = %0.2f sq.Units",Area);
    return 0;
}
