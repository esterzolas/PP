/*22. Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exemplo, 
a saída para n = 4 seria:
*
**
***
****
***
**
*                                                                                                  */

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
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}