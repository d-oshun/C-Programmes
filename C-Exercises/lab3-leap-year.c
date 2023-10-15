#include <stdio.h>
#include <stdlib.h>

int isALeapYear(int year)
{
    if ((year % 4) == 0)
    {
        printf("%d\n", year);
    }
    return (0);
}
int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        return (1);
    }

    int years = atoi(argv[2]) - atoi(argv[1]);

    for (int i = 0; i <=years; i++)
    {
        isALeapYear(atoi(argv[1])+i);
    }
    return (0);
}