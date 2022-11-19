/*12. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 +
6 + 11 + 22 + 33 = 78*/

#include <stdio.h>

int main()
{
    int num, soma;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("Divisores:\n");

    soma = 1;

    for (int i = 2; i <= (num / 2.0 + 1); i++)
    {
        if (num % i == 0)
        {
            printf("%d - ", i);
            soma += i;
        }
    }

    printf("\nA soma dos divisores de %d (exceto ele mesmo) eh: %d\n", num, soma);

    return 0;
}