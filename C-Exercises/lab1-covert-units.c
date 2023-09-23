#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{

    float centimetres = 0;
    float inches = 2.54;
    float number_to_inches;

    centimetres = atoi(argv[1]);

    number_to_inches = centimetres / inches; 

    printf("%.2f\n", number_to_inches);

    return (0);
}
