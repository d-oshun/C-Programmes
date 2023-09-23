#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int amount = argc -1;
    int numbers[amount];
    int index;
    int odd_numbers=0;

    for (index = 0; index<amount; index++)
    {
        numbers[index]=atoi(argv[index+1]);
        
        if ((numbers[index]%2)>0)
        {
            odd_numbers = odd_numbers + 1;
        }
    }
    printf("%d\n", odd_numbers);
    return (0);
}
