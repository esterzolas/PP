/*22.  Crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornar a
soma  em  um  terceiro  array.  Caso  o  tamanho  do  primeiro  e  segundo  array  seja  diferente
então a função retornará ZERO (0). Caso a função seja concluída com sucesso a mesma deve
retornar o valor UM (1). Utilize aritmética de ponteiros para manipulação do array.*/

#include <stdio.h>
#include <stdlib.h>

float soma(float *vet1, float *vet2, float *vet3, int tam1, int tam2);

int main()
{
    int i;
    int tam1, tam2;
    float *vet1 = NULL, *vet2 = NULL, *vet3 = NULL;

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tam1);

    vet1 = (float *)malloc(sizeof(float) * tam1);
    for (i = 0; i < tam1; i++)
    {
        printf("Digite o numero da posicao [%d] do vetor 1: ", i);
        scanf("%f", &*(vet1 + i));
    }
    printf("\n");

    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &tam2);

    vet2 = (float *)malloc(sizeof(float) * tam2);
    for (i = 0; i < tam2; i++)
    {
        printf("Digite o numero da posicao [%d] do vetor 2: ", i);
        scanf("%f", &*(vet2 + i));
    }
    printf("\n");

    vet3 = (float *)malloc(sizeof(float) * tam1);

    if (soma(vet1, vet2, vet3, tam1, tam2) == 0)
    {
        printf("O tamanho dos vetores sao diferentes!");
    }
    else
    {
        printf("Soma dos dois vetores:\n");
        for (i = 0; i < tam1; i++)
        {
            printf("%0.2f + %0.2f = %0.2f\n", *(vet1 + i), *(vet2 + i), *(vet3 + i));
        }
    }

    free(vet1);
    free(vet2);
    free(vet3);

    return 0;
}

float soma(float *vet1, float *vet2, float *vet3, int tam1, int tam2)
{
    int i;
    
    if (tam1 == tam2)
    {
        for (i = 0; i < tam1; i++)
        {
            *(vet3 + i) = *(vet1 + i) + *(vet2 + i);
        }

        return 1;
    }
    else
    {
        return 0;
    }
}