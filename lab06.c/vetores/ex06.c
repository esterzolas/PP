/*6. Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que
são primos e suas respectivas posições no vetor.*/

#include <stdio.h>

int main()
{
    int vetor[10];
    int i, j, k;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++)
    {
        k = 0;
        if (vetor[i] == 0)
        {
            printf("%d NAO eh um numero primo!\n", vetor[i]);
        }
        else if (vetor[i] == 1)
        {
            printf("%d NAO eh um numero primo!\n", vetor[i]);
        }
        // 0 e 1 nao numeros primos
        for (j = 2; j <= vetor[i] / 2; j++) //divide por 2 pra ir so ate metade, mais que a metade ja nao eh numero primo
        {
            if (vetor[i] % j == 0)
            {
                k++;
                break;
            }
        }
        if (k == 0)
        {
            printf("Numero primo: %d\n", vetor[i]);
        }
        else
        {
            printf("%d NAO eh um numero primo!\n", vetor[i]);
        }
    }

    return 0;
}