#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    float radius = 0.0;
    float area = 0.0;
    float PI = 3.14;
    float new_input;

    if (argc == 1)
    {   
        printf("You didnt enter a value!\n");
        return (0);
    }

    if (atoi(argv[1])<=0)
    {

        printf("You have entered a negative value, we will now correct that!\n");
        new_input = atoi(argv[1]) * -1;
    }
        
    radius = atoi(argv[1]);

    radius = radius * radius;
    area = radius *PI;

    printf("%.2f\n", area);

    return (0);

}

