#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void findWord(char * string, char * word);

int main(int argc, char * argv[])
{
    char *string = argv[1];
    char *word = argv[2];

    findWord(string, word);

    return (0);
}

void findWord(char * string, char * word)
{
    char *pfind = NULL;
    pfind = strstr(string, word);

    if (pfind != NULL)
    {
        int start = pfind - string;
        int end = start + strlen(word) - 1;
        
        printf("%d %d\n", start, end);
    }
}

    