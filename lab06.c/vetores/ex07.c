/*7. Faça um programa que receba 6 números inteiros e mostre:
     Os números pares digitados;
     A soma dos números pares digitados;
     Os números ímpares digitados;
     A quantidade de números ímpares digitados; */

#include <stdio.h>

int main()
{
    int vetor[6];
    int i, soma_pares = 0, quant_impares = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("Numeros pares digitados:\n");

    for (i = 0; i < 6; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            soma_pares += vetor[i];
            printf("%d\n", vetor[i]);
            if (vetor[i] == 0)
            {
                printf("%d\n", vetor[i]);
            }
        }
    }

    printf("A soma dos pares eh: %d\n", soma_pares);

    printf("\nNumeros impares digitados:\n");

    for (i = 0; i < 6; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            quant_impares++;
            printf("%d\n", vetor[i]);
        }
    }

    printf("A quantidade de numeros impares digitados eh: %d", quant_impares);

    return 0;
} 