/*Faça um programa que leia duas matrizes 2 × 2 com valores reais. Ofereça ao usuário um
menu de opções:
a) somar as duas matrizes
b) subtrair a primeira matriz da segunda
c) adicionar uma constante às duas matrizes
d) imprimir as matrizes*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A[2][2], B[2][2], C[2][2], D[2][2], constante;
    int i, j;
    char opcao;
    
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Digite uma valor para matriz A: \n", i, j);
            scanf("%f", &A[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Digite uma valor para matriz B: \n", i, j);
            scanf("%f", &B[i][j]);
        }
    }

    do
    {
        printf("Menu de opcoes:\n");
        printf("a) somar as duas matrizes\n");
        printf("b) subtrair a primeira matriz da segunda\n");
        printf("c) adicionar uma constante as duas matrizes\n");
        printf("d) imprimir as matrizes\n");
        printf("e) Sair\n");
        scanf("%c", &opcao);

        switch (opcao)
        {
        case 'a':

            printf("Matriz da soma das duas matrizes: \n");

            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    C[i][j] = A[i][j] + B[i][j];
                    printf("%0.2f ", C[i][j]);
                }

                printf("\n");
            }

            break;

        case 'b':

            printf("Matriz da subtracao da primeira matriz pela segunda: \n");

            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    D[i][j] = B[i][j] - A[i][j];
                    printf("%f ", D[i][j]);
                }

                printf("\n");
            }

            break;

        case 'c':
            printf("Digite uma constante para soma: \n");
            scanf("%f", &constante);

            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    A[i][j] = A[i][j] + constante;
                    B[i][j] = B[i][j] + constante;
                }
            }

            break;

        case 'd':

            printf("Primeira matriz:\n");

            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    printf("%f ", A[i][j]);
                }

                printf("\n");
            }

            printf("Segunda matriz: \n");

            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    printf("%f ", B[i][j]);
                }

                printf("\n");
            }

            break;

        case 'e':
            return 0;
            break;

        default:
            printf("Opcao valida!\n");
            break;
        }

    } while (opcao != 'e');
    
    return 0;
}