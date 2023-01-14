/*21.  Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. Associe
o ponteiro ao array. Agora, some mais um (+1) a cada posição do array usando o ponteiro
(use *). */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam = 3;
    int i, vet[tam], *p;

    p = vet;

    for (i = 0; i < tam; i++)
    {
        printf("Digite um valor inteiro: ");
        scanf("%d", &vet[i]);
    }
    printf("\n");

    for (i = 0; i < tam; i++)
    {
        (*(p + i))++;
    }
    
    printf("Vetor apos somar mais um: ");
    for (i = 0; i < tam; i++)
    {
        printf(" %d | ", vet[i]);
    }

    return 0;
}