/*14.  Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do array.
A função deverá preencher os elementos de array com esse valor. Não utilize índices para
percorrer o array, apenas aritmética de ponteiros.*/

#include <stdio.h>

int tam = 5;

int preencher(int *p, int vet);

int main()
{
    int *p, i, vet[tam];

    p = vet;

    preencher(p, vet);

    printf("Array preenchido:\n");
    for (i = 0; i < tam; i++)
    {
        printf(" %d | ", *(p + i));
    }
    printf("\n");

    return 0;
}

int preencher(int *p, int vet)
{
    int i;

    p = vet;

    for (i = 0; i < tam; i++)
    {
        printf("Entre com um valor: ");
        scanf("%d", &*(p + i));
    }
}