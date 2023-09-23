/*
Program: lab1-circle-area.c
Author: Diana Williams Oshun
Student Number: 23101961
Input: takes a single argument
Output: computes the area of a circle
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    float radius = 0.0;
    float area = 0.0;
    float PI = 3.14159265359;
    radius = atoi(argv[1]);

    radius = radius*radius;
    area = radius*PI;

    printf("%.2f\n",area);
    return(0);
}
