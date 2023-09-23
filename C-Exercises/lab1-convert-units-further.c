#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[])
{
    float inches = 2.54;
    float number_to_inches;
    int centimetres = 30;
    int index = 0;

    
    for (centimetres = 30; centimetres < 50; centimetres +=5)
        {
        
        for (index = 0; index < 5; ++index)
            {
                number_to_inches = (centimetres+index) / inches;

                printf("%.2f\t", number_to_inches);
            }
        printf("\n");
        }

    return (0);

}
