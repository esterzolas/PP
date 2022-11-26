/*17. Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a 
soma dos N números inteiros existentes entre eles.*/

#include <stdio.h>

int soma (int num1, int num2);

int main()
{
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    printf("A soma dos numeros entre eles eh: %d", soma(num1, num2));

    return 0;
}

soma(int num1, int num2)
{
    int i;
    int soma = 0;
    for (i = num1 + 1; i < num2; i++)
    {
        soma += i;
    }
    return soma;
}