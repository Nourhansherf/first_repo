#include <stdio.h>
void printOdd(int cur, int limit)
{
    if (cur > limit)
        return;
    printf("%d ", cur);
    printOdd(cur + 2, limit);
}
void printeven(int cur, int limit)
{
    printf("\neven numbers from %d to %d are: ", cur, limit);
    for (int i = cur; i <= limit; i++)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }
}
int main()
{
    int lowerLimit, upperLimit;
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);
    printf("odd Numbers from %d to %d are: ", lowerLimit, upperLimit);
    printOdd(lowerLimit, upperLimit);
    printeven(lowerLimit, upperLimit);
    return 0;
}