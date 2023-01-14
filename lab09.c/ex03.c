/*3. Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado.
Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/

#include <stdio.h>

int main()
{
    int *pnum1, *pnum2;
    int num1, num2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite um numero inteiro: ");
    scanf("%d", &num2);

    pnum1 = &num1;
    pnum2 = &num2;

    if (&num1 > &num2)
    {
        printf("\nEndereco do numero %d eh: %d\nEndereco do numero %d eh: %d\nO maior endereco eh do numero %d!\n", num1, pnum1, num2, pnum2, num1);
    }
    else
    {
        printf("\nEndereco do numero %d eh: %d\nEndereco do numero %d eh: %d\nO maior endereco eh do numero %d!\n", num1, pnum1, num2, pnum2, num2);
    }
    return 0;
}