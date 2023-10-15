#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char * token = strtok(argv[1], " ");
    int maxLen =0;
    char* largest = " ";

    while (token != NULL)
    {
        int currentLen = strlen(token);

        if (currentLen > maxLen)
        {
            maxLen = currentLen;

            if( largest != " ")
            {
                free(largest);
            }

            strcat(largest, token);
        }
        token = strtok(NULL, " ");
    }
    printf("%s\n", largest);
    return (0);
}