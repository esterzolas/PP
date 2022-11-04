/*28. Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário:
(a) Geométrica
(b) Ponderada
(c) Harmônica
(d) Aritmética */

#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, num3;
    float resultado, soma;
    char opcao;
    printf("Digite tres numeros inteiros (separados por enter): ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Calcule:\n(A)Geometrica\n(B)Ponderada\n(C)Harmonica\n(D)Aritmetica\nDigite uma opcao:");
    scanf(" %c", &opcao);

    switch (opcao)
    {
    case 'a': 
        soma = num1 + num2 + num3;
        resultado = pow(soma, 1.0 / 3.0);
        printf("Resultado %0.2f", resultado);
        break;
    case 'b':
        resultado = ((1 * num1) + (2 * num2) + (3 * num3)) / 3;
        printf("Resultado %0.2f", resultado);
        break;
    case 'c':
        resultado = 1 / (1 / num1) + (1 / num2) + (1 / num3);
        printf("Resultado %0.2f", resultado);
        break;
    case 'd':
        resultado = (num1 + num2 + num3) / 3;
        printf("Resultado %0.2f", resultado);
        break;
    default:
        break;
    }
    return 0;
}