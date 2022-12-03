/*5. Gerar e imprimir uma matriz de tamanho 10 × 10, onde seus elementos são da forma:
A[i][j] = 2 i + 7j - 2 se i < j;
A[i][j] = 3 i elevado a 2- 1 se i = j;
A[i][j] = 4 i elevado a 3 – 5 j elevado a 2 + 1 se i > j:*/

#include <stdio.h>
#include <math.h>

int main()
{
    int matriz[10][10];
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; i++)
        {
            if (i < j)
            {
                matriz[i][j] = (2 * i) + (7 * j) - 2;
            }
            else if (i = j)
            {
                matriz[i][j] = (3 * (i * i)) - 1;
            }
            else if (i > j)
            {
                matriz[i][j] = (4 * (i * i * i)) - (5 * (j * j)) + 1;
            }
        }
    }

    printf("Matriz: ");

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; i++)
        {
            if (matriz[i][j] < 0)
            {
                printf("%d   ", matriz[i][j]);
            }
            else if (matriz[i][j] < 10 && matriz[i][j] > 0)
            {
                printf("%d    ", matriz[i][j]);
            }
            else if (matriz[i][j] > 10 && matriz[i][j] < 100)
            {
                printf("%d   ", matriz[i][j]);
            }
            else if (matriz[i][j] > 100 && matriz[i][j] < 1000)
            {
                printf("%d  ", matriz[i][j]);
            }
            else
            {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
