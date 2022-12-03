/*2. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores
X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá
escrever a soma dos valores encontrados nas respectivas posições X e Y.*/

#include <stdio.h>

int main()
{
    float vetor[8];
    float X, Y;
    float soma = 0;

    printf("Digite dois numeros:\n");
    scanf("%f %f", &X, &Y);

    vetor[0] = X;
    vetor[1] = Y;

    soma = vetor[0] + vetor[1];

    printf("A soma dos valores eh: %0.2f", soma);

    return 0;
}