#include <stdio.h>
void main()
{
    int i, size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size], copy_arr[size];
    printf("Enter elements of array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        copy_arr[i] = arr[i];
    }
    printf("\nElements of array are : ");
    for (i = 0; i < size; i++)
    {
        printf("%d , ", arr[i]);
    }
    printf("\nElements of dest array are : ");
    for (i = 0; i < size; i++)
    {
        printf("%d , ", copy_arr[i]);
    }
}