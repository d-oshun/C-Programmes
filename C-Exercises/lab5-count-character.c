#include <stdio.h>
#include <string.h>

void countLetters(char *string, char * find);

int main(int argc, char * argv[])
{
    char *string = argv[2];
    char *find = argv[1];
    countLetters(string , find); 
    return (0);
}

void countLetters(char *string, char * find)
{
    int count = 0;
    char *pfindletter = string;
    while (pfindletter = strchr(pfindletter, *find))
    {
        ++count;
        ++pfindletter;
    }
    printf("%d\n", count);
}