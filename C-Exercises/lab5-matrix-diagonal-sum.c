#include <stdio.h>
#include <stdlib.h>

void diagonalAdd(int *matrix, int n);

int main(int argc, char * argv[])
{
    int n = atoi(argv[1]);
    int matrix[n][n];
    int args_counter = 2;

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++ )
        {
            matrix[i][k] = atoi(argv[args_counter]);
            args_counter++;
        }
    }
    diagonalAdd((int *)matrix, n);
    return(0);
}

void diagonalAdd(int *matrix, int n)
{
    int args_counter = 2;
    int *pdiagonal_count = malloc(sizeof(int));

    *pdiagonal_count = 0;
    for (int i = 0; i < n; i++)
    {
        *pdiagonal_count += *(matrix + i * n + i);;
    }
    printf("%d\n", *pdiagonal_count);
    free(pdiagonal_count);
}
