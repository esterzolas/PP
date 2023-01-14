/*5. Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada e retorne o maior
valor na primeira variável e o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela. */

#include <stdio.h>

void tamanho(int *p1, int *p2);

int main()
{
    int num1, num2;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);

    tamanho(&num1, &num2);

    printf("maior numero = %d\n", num1);
    printf("menor numero = %d\n", num2);

    return 0;
}

void tamanho(int *p1, int *p2)
{
    int sub;
    if (*p1 < *p2)
    {
        sub = *p1;
        *p1 = *p2;
        *p2 = sub;
    }
}