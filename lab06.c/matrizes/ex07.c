/*7. Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de
bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de
modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a
cartela gerada.*/

#include <stdio.h>
#include <time.h>

int main()
{
    int matriz[5][5], i, j, k, l, c = 0;

    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 100;
            for (k = 0; k <= i; k++)
            {
                for (l = 0; l < j; l++)
                {
                    if (matriz[i][j] == matriz[k][l])
                    {
                        matriz[i][j] = rand() % 100;
                        k = 0;
                        l = 0;
                    }
                }
            }
        }
    }
    
    printf("Cartela de bingo: \n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (matriz[i][j] < 10)
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