#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int indexOf(const char *str, const char toFind);

int main()
{
    char str[MAX_SIZE];
    char toFind;
    int index;
    printf("Enter any string: ");
    gets(str);
    printf("Enter character to be searched: ");
    toFind = getchar();

    index = indexOf(str, toFind);

    if (index == -1)
        printf("'%c' not found.", toFind);
    else
        printf("'%c' is found at index %d.", toFind, index);

    return 0;
}