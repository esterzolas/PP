/*3. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na
ordem inversa.*/

#include <stdio.h>

int main()
{
    int vetor[6];
    int i, j;

    printf("Digite seis valores inteiros(separados por enter):\n");

    for (i = 0; i < 6; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Ordem inversa\n");

    for (j = 5; j >= 0; j--)
    {
        printf("%d\n", vetor[j]);
    }

    return 0;
}