/*10.  Crie  um  programa  que  contenha  um  array  de  inteiros  contendo  5  elementos. Utilizando
apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor
lido.*/

#include <stdio.h>

int main()
{
    int i, *p, vet[5];

    p = vet;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero para posicao %d: ", i + 1);
        scanf("%d", &*(p + i));
    }

    printf("Valores apos aplicar o dobro:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *(p + i) * 2);
    }

    return 0;
}