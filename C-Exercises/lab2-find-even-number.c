#include <stdlib.h>
#include <stdio.h>

int main(int argc,char * argv[])
{
    int amount = argc-1;
    int number[amount];
    int index;
    int count=0;

    for (index = 0; index<amount; index++)
    {
        number[index] = atoi(argv[index+1]);

        if ((number[index]%2) == 0)
        {
            printf("%d - %d\n", index, number[index]);
            count = count+1;
        }
    }
    if (count==0)
    {
        printf("Not found!\n");
    }
    return (0);

}
