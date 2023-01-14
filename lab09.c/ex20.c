/*20.  Implemente  uma  função  que  receba  como  parâmetro  um  array  de  números  reais  de
tamanho N e retorne quantos números negativos há nesse array. Essa função deve obedecer
ao protótipo:
int negativos(float *vet, int N);*/

#include <stdio.h>
#include <stdlib.h>

int negativos(float *vet, int tam);

int main()
{
    int i, tam;
    float *vet = NULL;

    printf("Digite o tamanho do vetor:");
    scanf("%d", &tam);

    vet = (float*)malloc(sizeof(float) * tam);

    for (i = 0; i < tam; i++)
    {
        printf("Entre com um valor real: ");
        scanf("%0.2f", &vet[i]);
    }
    printf("\n");

    for (i = 0; i < tam; i++)
    {
        printf(" %f | ", vet[i]);
    }
    printf("\n\n");

    printf("Existem %d numeros negativos no vetor!\n", negativos(vet, tam));

    return 0;
}

int negativos(float *vet, int tam)
{
    int i, contador, soma = 0;

    for (i = 0; i < tam; i++)
    {
        if (vet[i] < 0)
        {
            soma++;
        }
    }

    contador = soma;

    return contador;
}
