/*19. Faça uma função que receba um número inteiro positivo n e calcule o seu fatorial, n!.*/

#include <stdio.h>

int fatorial (int n);

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("O fatorial eh: %d", fatorial(n));

    return 0;
}

int fatorial (int n)
{
    int i;
    int fatorial = 1;
    for (i = 1; i <= n; i++)
    {
        fatorial *= i;
    }
    return fatorial;
}