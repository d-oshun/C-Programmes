#include <stdio.h>
#include <string.h>

void findMost(char *string);

int main(int argc, char * argv[])
{
    char *string = argv[1];
    findMost(string); 
    return (0);
}

void findMost(char *string)
{
    int max_count = 0;
    int count = 0;
    char *pmostcommon = NULL;
    char space = ' ';
    
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == space) 
        {
            continue; // Skip spaces
        }
        char *pfindletter = string+i;
        while (pfindletter = strchr(pfindletter, string[i]))
        {
            ++count;
            ++pfindletter;
            if (count > max_count)
            {
                max_count = count;
                pmostcommon = &string[i]; 
            }
        }
        count = 0;
    }
    printf("%c\n", *pmostcommon);
}