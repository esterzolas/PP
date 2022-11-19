/*9. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
naturais ímpares.*/

#include <stdio.h>

int main()
{
    int num;
    int i;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}