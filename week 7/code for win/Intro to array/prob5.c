#include <stdio.h>
void main()
{
    int size, i;
    int max1, max2;
    printf("Enter size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements in the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    printf("First largest = %d\n", max1);
    printf("Second largest = %d", max2);
}