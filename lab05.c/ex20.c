/*20. Escreva uma função para determinar a quantidade de números primos abaixo de N.*/

#include <stdio.h>

int primos (int n);

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("A quantidade de primos abaixo de %d eh: %d", n, primos(n));

    return 0;
}

int primos (int n)
{
    int i, j, contador = 0;
    for (i = 2; i < n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            contador++;
        }
    }
    return contador;
}