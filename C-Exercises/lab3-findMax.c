#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[])
{
    int max_num = 0;

    for (int i=1; i < argc; i++)
    {
        if (atoi(argv[i]) > max_num)
        {
            max_num = atoi(argv[i]);
        }
    }
    printf("%d\n", max_num);
    return (0);
}