/*8. Faça um programa para armazenar em memória um vetor de dados contendo 1500 valores
do tipo int, usando a função de alocação dinâmica de memória CALLOC:
a) Faça um loop e verifique se o vetor contém realmente os 1500 valores inicializados com
zero (conte os 1500 zeros do vetor);*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, *vet, soma = 0;

    vet = (int *)calloc(1500, sizeof(int));

    for (i = 0; i < 1500; i++)
    {
        vet[i] = 0;
    }

    for (i = 0; i < 1500; i++)
    {
        printf("posicao [%d]: %d\n", i, vet[i]);
    }

    free(vet);
    
    return 0;
}