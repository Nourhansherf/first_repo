#include <stdio.h>
void curcle(float radius)
{
    float diameter = radius + radius;
    float Circumference = 2 * 3.14 * radius;
    float Area = 3.14 * radius * radius;
    printf("The diameter = %.2f units \nThe Circumference = %.2f units \nThe area = %.2f units", diameter, Circumference, Area);
}
int main()
{
    float r;
    scanf("%f", &r);
    curcle(r);
}