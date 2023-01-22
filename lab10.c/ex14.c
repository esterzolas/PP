/*14.  Construa um programa que leia o número de linhas e de colunas de uma matriz de números
reais,  aloque  espaço  dinamicamente  para  esta  e  a  inicialize  com  valores  fornecidos  pelo
usuário.  Ao  final,  o  programa  deverá  retornar  a  matriz  na  saída  padrão  com  layout
apropriado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, **mat, linhas, colunas;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    fflush(stdin);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);
    fflush(stdin);

    mat = (int **)malloc(sizeof(int *) * linhas);
    for (i = 0; i < linhas; i++)
    {
        mat[i] = (int *)malloc(sizeof(int) * colunas);
        for (j = 0; j < colunas; j++)
        {
            printf("Entre com o valor para posicao [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            fflush(stdin);
        }
    }

    for (i = 0; i < linhas; i++)
    {
        printf("|");
        for (j = 0; j < colunas; j++)
        {
            printf(" %5hd |", mat[i][j]); // para ficar centralizado
        }
        printf("\n");
    }

    for (i = 0; i < colunas; i++)
    {
        free(mat[i]);
    }
    free(mat);

    
    return 0;
}