#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[])
{
    int find_num = atoi(argv[1]);
    int found = 0;

    for (int i=2; i < argc; i++)
    {
        if (atoi(argv[i]) == find_num)
        {
            printf("Found %d at %d\n", find_num, i-2);
            found = 1;
        }

    }
    if (found == 0)
    {
        printf("%d not found\n", find_num);
    }
    
    return (0);
}