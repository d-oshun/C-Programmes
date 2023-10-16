#include<stdlib.h>
#include <stdio.h>

void multiplyMatrix(int n, int m,int matrix1[n][m], int t, int v, int matrix2[t][v]);

int main(int argc, char * argv[])
{
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);
    int matrix1[n][m];
    int t = atoi(argv[(n * m)+3]);
    int v = atoi(argv[t+1]);
    int matrix2[t][v];

    int args_counter1 = 3;
    int args_counter2 = (n * m)+5;

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++ )
        {
            matrix1[i][k] = atoi(argv[args_counter1]);
            args_counter1++;
        }
    }

    for (int i = 0; i < t; i++)
    {
        for (int k = 0; k < v; k++ )
        {
            matrix2[i][k] = atoi(argv[args_counter2]);
            args_counter2++;
        }
    }
    
    multiplyMatrix(n, m, matrix1, t, v, matrix2);

    return (0);

}
void multiplyMatrix(int n, int m,int matrix1[n][m], int t, int v, int matrix2[t][v])
{
   if (m != t)
    {
        return;
    }

    int newmatrix[n][v];
    int *pnewvalue = malloc(sizeof(int));

    for (int i = 0; i <n; i++)
    {
        for (int k = 0; k < v; k++ )
        {
            *pnewvalue = 0;

            for (int j = 0; j < m; j++)
            {
                 *pnewvalue += matrix1[i][j] * matrix2[j][k];
            }

            newmatrix[i][k] = *pnewvalue;
            if (k == v - 1)
            {
                printf("%d", newmatrix[i][k]);

            }
            else
            {
                printf("%d ", newmatrix[i][k]);
            }
            

            
        }
        printf("\n");
    }
    free(pnewvalue);
}