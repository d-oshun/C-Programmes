#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
    int bubble1[50];

    for (int i=1; i<argc;i++)
    {
        bubble1[i]=atoi(argv[i]);
    }
    for (int k = 1; k <4; k++)
    {
        for (int i = 1; i<argc; i++)
        {
            for (int j=i+1; j<argc; j++)
            {
                if (bubble1[i]>bubble1[j])
                {
                    int temp;
                    temp = bubble1[i];
                    bubble1[i] = bubble1[j];
                    bubble1[j] = temp;
                }
            }
        }
    }
    for (int t =1; t<argc; t++)
    {
        printf("%d\n", bubble1[t]);
    }
    return(0);
}