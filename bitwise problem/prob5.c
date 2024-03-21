#include <stdio.h>
int main()
{
    int num, n, newNum;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Enter nth bit to clear : ");
    scanf("%d", &n);
    newNum = num & (~(1 << n));
    printf("Number after clearing %d bit: %d (in decimal)\n", n, newNum);
    return 0;
}