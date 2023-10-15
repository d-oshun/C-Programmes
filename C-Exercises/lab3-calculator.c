#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool canDivide(float numberA, float numberB)
{
    if ((numberA!=0) && (numberB!=0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

float multiply(float numberA, float numberB)
{
    float answer;
    answer = numberA*numberB;

    return answer;
}

float divide(float numberA, float numberB)
{
    float answer;
    answer = numberA/numberB;

    return answer;
}

int main(int argc, char*argv[])
{
    float number1 = atof(argv[2]);
    float number2 = atof(argv[3]);

    if (strcmp(argv[1], "divide") == 0)
    {
        if (canDivide(number1,number2) == true)
        {
            printf("%f\n", divide(number1,number2));
        }
        else
        {
            printf("invalid\n");
        }
    }
    else if (strcmp(argv[1], "multiply") == 0)
    {
        printf("%f\n", multiply(number1,number2));
    }
    else
    {
        printf("invalid\n");
    }

}   