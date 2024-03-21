#include <stdio.h>

int main()
{
    int num, n, newNum;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Enter nth bit to toggle: ");
    scanf("%d", &n);
    newNum = num ^ (1 << n);
    printf("Number after toggling %d bit: %d (in decimal)\n", n, newNum);
    return 0;
}