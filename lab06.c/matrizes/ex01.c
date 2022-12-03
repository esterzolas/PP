/*1. Leia uma matriz 4 × 4, conte e escreva quantos valores maiores que 10 ela possui.*/

#include <stdio.h>

int main()
{
    int matriz[4][4];
    int i, j, maior = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite um valor: ");
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 10)
            {
                maior++;
            }
        }
    }
    printf("A matriz possui %d valores maiores que 10.\n", maior);

    return 0;
}
