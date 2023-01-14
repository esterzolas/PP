/*19.  Escreva  uma  função  que  aceita  como  parâmetro  um  array  de  inteiros  com  N  valores,  e
determina o maior elemento do array e o número de vezes que este elemento ocorreu no
array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a
função deve retorna para o programa que a chamou o valor 15 e o número 3 (indicando que
o número 15 ocorreu 3 vezes). A função deve ser do tipo void.*/

#include <stdio.h>
#include <stdlib.h>

void maior(int *vet, int tam, int *vezes);

int main()
{
    int i, tam, *vet = NULL, vezes = 0, rep;

    printf("Digite o numero de elementos que deseja no vetor: ");
    scanf("%d", &tam);

    vet = (int*)malloc(sizeof(int) * tam);

    for (i = 0; i < tam; i++)
    {
        printf("Digite um valor para a posicao %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    maior(vet, tam, &vezes);

    if (vezes == 1)
    {
        printf("\nO numero %d ocorreu 1 vez!", vet[0]);
    }
    else
    {
        printf("\nO numero %d ocorreu %d vezes!", vet[0], vezes);
    }
    return 0;
}

void maior(int *vet, int tam, int *vezes)
{
    int i, j;
    int sub;

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            if (vet[j] < vet[i])
            {
                sub = vet[i];
                vet[i] = vet[j];
                vet[j] = sub;
            }
        }
    }

    for (i = 0; i < tam; i++)
    {
        if (vet[i] == vet[0])
        {
            (*vezes)++;
        }
    }

    for (i = 0; i < tam; i++)
    {
        printf(" %d | ", vet[i]);
    }
}