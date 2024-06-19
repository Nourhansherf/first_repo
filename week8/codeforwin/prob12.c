#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char text[MAX_SIZE];
    int index = -1;
    printf("Enter any string: ");
    gets(text);
    while (text[++index] != '\0')
        ;
    printf("Length of '%s' = %d", text, index);
    return 0;
}