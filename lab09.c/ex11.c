/*11.  Crie  um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o endereço das posições contendo valores pares.*/

#include <stdio.h>

int main()
{
    int i, *p, vet[5];

    p = vet;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero para posicao %d: ", (i + 1));
        scanf("%d", &vet[i]);
    }

    printf("Enderecos das posicoes contendo valores pares:\n");
    for (i = 0; i < 5; i++)
    {
        if (vet[i] % 2 == 0)
        {
            printf("Posicao %d eh: %d\n", (i + 1), p);
        }
    }

    return 0;
}