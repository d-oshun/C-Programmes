#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    float PI = 3.1415;
    int radius = 0.0;
    int height = 0.0;
    float area_cylinder;
    int radius2;

    radius = atof(argv[1]);
    height = atof(argv[2]);

    if (argc==1)
    {
        printf("No input given!\n");
    }
    else if (argc==2)
    {
        printf("Two arguments needed!\n");
    }
    else if ((radius<=0) || (height<=0))
    {
        printf("The radius or height cannot be negative!\n");
    }
    else
    {
        radius2 = radius * radius;
        area_cylinder = (2 *PI * radius *height) + (2*PI*radius2); 
        printf("%.2f\n", area_cylinder);
    }
    return (0);
}
