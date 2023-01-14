/*15.  Crie uma função que receba como parâmetro um array e o imprima. Não utilize índices para
percorrer o array, apenas aritmética de ponteiros.*/

#include <stdio.h>

int tam = 5;

int imprimir(int *vet);

int main()
{
    int i, vet[tam];

    for (i = 0; i < tam; i++)
    {
        printf("Entre com um valor: ");
        scanf("%d", &vet[i]);
    }

    printf("\nArray preenchido:\n");
    imprimir(&vet);

    return 0;
}

int imprimir(int *vet)
{
    int i;

    for (i = 0; i < tam; i++)
    {
        printf("| %d ", *(vet + i));
    }
    printf("|");
    printf("\n");

    return 0;
}
