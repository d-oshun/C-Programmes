#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[])
{
    
    int found = 0;

    for (int i=1; i < argc; i++)
    {
        int find_num = atoi(argv[i]);
        int ind_of_num = i;

        for (int i=1; i < argc; i++)
        {
            if (i != ind_of_num)
            {
                if (found == 0)
                {
                    if (atoi(argv[i]) == find_num)
                    {
                        printf("%d\n", find_num);
                        found = 1;
                        break;
                    }
                }
            }
            
        }
        

    }
    if (found == 0)
    {
        printf("no duplicated number\n");
    }
    
    return (0);
}