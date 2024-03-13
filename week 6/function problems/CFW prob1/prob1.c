#include <stdio.h>
int cube(int number)
{
    int cubed = number * number * number;
    return cubed;
}
int main()
{
    int num;
    scanf("%d", &num);
    int z = cube(num);
    printf("Cube of %d is %d", num, z);
}