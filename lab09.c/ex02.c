/*2. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba
o maior endereço.*/

#include <stdio.h>

int main()
{
    int *pnum1, *pnum2;
    int num1, num2;

    pnum1 = &num1;
    pnum2 = &num2;

    if (pnum1 > pnum2)
    {
        printf("Endereco num1 = %d\nEndereco num2 = %d\nO maior endereco eh da variavel num1!\n", pnum1, pnum2);
    }
    else
    {
        printf("Endereco num1 = %d\nEndereco num2 = %d\nO maior endereco eh da variavel num2!\n", pnum1, pnum2);
    }

    return 0;
}