/*1. Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.*/

#include <stdio.h>

int dobro(int num);

int main()
{

    int num;
    printf("Entre com um numero inteiro: ");
    scanf("%d", &num);
    printf("O dobro deste numero eh: %d", dobro(num));

    return 0;
}

int dobro(int num)
{
    return num * 2;
}