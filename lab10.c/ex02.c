/*2. Faça um programa que leia do usuario o tamanho de um vetor a ser lido e faça a alocação 
dinâmica de memória. Em seguida, leia do usuário seus valores e imprima o vetor lido.*/

#include <stdio.h>

int main()
{
    int i, *vet, tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    vet = (int*)malloc(sizeof(int*) * tam);

    for (i = 0; i < tam; i++)
    {
        printf("Entre com um valor para posicao [%d]: ", i);
        scanf("%d", &vet[i]);
    }
    
    for (i = 0; i < tam; i++)
    {
        printf(" %d |", vet[i]);
    }

    free(vet);
    
    return 0;
}