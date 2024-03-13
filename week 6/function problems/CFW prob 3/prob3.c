#include <stdio.h>
void fun(int num1, int num2)
{
    if (num1 >= num2)
        printf("Maximum = %d \nMinimum = %d", num1, num2);
    else
        printf("Maximum = %d \nMinimum = %d", num2, num1);
}
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    fun(num1, num2);
}