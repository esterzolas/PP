/*23. Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exemplo, a 
saída para n = 6 seria:
 *
 ***
 *****
 *******
 *********
 ***********
*/

#include <stdio.h>

triangulo (int n);

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    triangulo(n);

    return 0;
}

triangulo (int n)
{
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}