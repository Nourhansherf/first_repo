#include <stdio.h>
#define MAX_SIZE 100
void inputArray(int *arr, int size);
void printArray(int *arr, int size);
void swapArray(int *sourceArr, int *destArr, int size);
int main()
{
    int sourceArr[MAX_SIZE];
    int destArr[MAX_SIZE];
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter %d elements in source array: ", size);
    inputArray(sourceArr, size);
    printf("Enter %d elements in destination array: ", size);
    inputArray(destArr, size);
    printf("\n\nSource array before swapping: ");
    printArray(sourceArr, size);
    printf("\nDestination array before swapping: ");
    printArray(destArr, size);
    swapArray(sourceArr, destArr, size);
    printf("\n\nSource array after swapping: ");
    printArray(sourceArr, size);
    printf("\nDestination array after swapping: ");
    printArray(destArr, size);
    return 0;
}