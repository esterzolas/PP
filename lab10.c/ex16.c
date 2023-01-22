/*16.  Faça um programa que leia dois números N e M:
a) Crie e leia uma matriz N x M de inteiros;
b) Crie e construa uma matriz transposta M x N de inteiros;
c) Mostre as duas matrizes.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, **mat1, **mat2, M, N;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &N);
    fflush(stdin);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &M);
    fflush(stdin);

    printf("MATRIZ 1 (N x M)\n");
    mat1 = (int **)malloc(sizeof(int) * N);
    for (i = 0; i < N; i++)
    {
        mat1[i] = (int *)malloc(sizeof(int) * M);
        for (j = 0; j < M; j++)
        {
            printf("Entre com o valor para posicao [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
            fflush(stdin);
        }
    }

    printf("\nMATRIZ 2 (M x N)\n");
    mat2 = (int **)malloc(sizeof(int) * M);
    for (i = 0; i < M; i++)
    {
        mat2[i] = (int *)malloc(sizeof(int) * N);
        for (j = 0; j < N; j++)
        {
            printf("Entre com o valor para posicao [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
            fflush(stdin);
        }
    }

    printf("MATRIZ 1 (N x M)\n");
    for (i = 0; i < N; i++)
    {
        printf("|");
        for (j = 0; j < M; j++)
        {
            printf(" %5hd |", mat1[i][j]); // mesma coisa do anterior
        }
        printf("\n");
    }

    printf("\nMATRIZ 2 (M x N)\n");
    for (i = 0; i < M; i++)
    {
        printf("|");
        for (j = 0; j < N; j++)
        {
            printf(" %5hd |", mat2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < M; i++)
    {
        free(mat1[i]);
    }
    free(mat1);

    for (i = 0; i < N; i++)
    {
        free(mat2[i]);
    }
    free(mat2);

    return 0;
}