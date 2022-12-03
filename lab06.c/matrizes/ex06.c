/*6. Gere matriz 4 × 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a
matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos
acima da diagonal principal. Imprima a matriz original e a matriz transformada.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[4][4], i, j;

    srand(time(NULL));

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            do
            {
                A[i][j] = rand() % 21;

            } while (A[i][j] == 0);
        }
    }
    printf("Matriz original: \n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (A[i][j] < 10)
            {
                printf("%d  ", A[i][j]);
            }
            else
            {
                printf("%d ", A[i][j]);
            }
        }
        printf("\n");
    }
    printf("Matriz triangular inferior: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i < j)
            {
                A[i][j] = 0;
            }
            else if (A[i][j] < 10)
            {
                printf("%d  ", A[i][j]);
            }
            else
            {
                printf("%d ", A[i][j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}