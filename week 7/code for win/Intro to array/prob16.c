#include <stdio.h>
void main()
{
    int size, i;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArray in reverse order: ");
    for (i = size - 1; i >= 0; i--)
    {
        printf("%d  ", arr[i]);
    }
}