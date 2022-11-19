/*21. Faça um programa que conte quantos números primos existentes entre a e b, onde a e b são
números informados pelo usuário*/

#include <stdio.h>

int main()
{
    int a, b, i, j;
    int contagem = 0;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite um segundo numero: ");
    scanf("%d", &b);

    for (i = a; i <= b; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            contagem++;
        }
    }

    printf("Ha %d numeros primos entre %d e %d.", contagem, a, b);

    return 0;
}