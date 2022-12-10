/*1. Faça um programa que leia uma string e a imprima.*/

#include <stdio.h>

int main()
{
    char string[100];
    int i, x = 0;

    printf("Digite uma frase: \n");
    fgets(string, 100, stdin);

    for (i = 0; string[i] != '\0'; i++)
    {
        printf("%c", string[i]);
    }

    return 0;
}
