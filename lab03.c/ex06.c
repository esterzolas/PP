/*6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
como a diferença existente entre ambos.*/

#include <stdio.h>

int main()
{
    int num1, num2, diferenca;
    printf("Digite dois numeros inteiros (separados por enter): ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        diferenca = num1 - num2;
        printf("O maior numero eh: %d e a diferenca eh igual a: %d", num1, diferenca);
    }
    else
    {
        diferenca = num2 - num1;
        printf("O maior numero eh %d e a diferenca eh igual a : %d", num2, diferenca);
    }
    return 0;
}
