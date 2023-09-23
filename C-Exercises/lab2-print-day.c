#include <stdlib.h>
#include <stdio.h>

int main(int argc, char*argv[])
{
    int day;
    day = atoi(argv[1]);

    switch(day)
    {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
                printf("Tuesday\n");
                break;
        case 4:
            printf("Wednesday\n");
            break; 
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Not a day!");
            break;
    }
    return (0);
}
