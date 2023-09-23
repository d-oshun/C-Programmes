#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int sides = atoi(argv[1]);
    int index;
    int jdex;

    for (index = 1; index <= sides; index++)
    {
        if ((index == 1) || (index == sides))
        {
            for (jdex = 1; jdex <= sides; jdex++)
            {
                printf("*");
            }
        }
        else
        {
             printf("*");
             for (jdex = 2; jdex <= sides; jdex++)
             {
                if (jdex == sides)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
             }
        }
        printf("\n");
     }

     return (0);
}






