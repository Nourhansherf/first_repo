#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LENGTH 1000
int main()
{
    char sentence[MAX_LENGTH];
    fgets(sentence, MAX_LENGTH, stdin);
    size_t length = strlen(sentence);
    if (length > 0 && sentence[length - 1] == '\n')
    {
        sentence[length - 1] = '\0';
    }
    char *word = strtok(sentence, " ");
    while (word != NULL)
    {
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }

    return 0;
}