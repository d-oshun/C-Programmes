#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverse(char * sentence)
{
    char reverse[50] = "";
    char current_char;

    int length = strlen(sentence);

    for (int index = length; index >= 0; index--)
    {
        strncat(reverse, &sentence[index], 1);

    }
    printf("%s\n", reverse);
    return (0);
}

int main(int argc, char *argv[])
{
    reverse(argv[1]);

    return (0);
}