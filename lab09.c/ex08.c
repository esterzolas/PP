/*8. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array. */

#include <stdio.h>

int main()
{
    float vet[10];
    int *p; //só precisa ser do mesmo tipo quando quero acessar o conteúdo
    int i;

    p = &vet ;

    for (i = 0; i < 10; i++)
    {
        printf("Endereco da posicao %d eh %d\n", i, p + i);
    }

    return 0;
}