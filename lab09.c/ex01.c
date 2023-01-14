/*1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável
usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.*/

#include <stdio.h>

int main()
{
    int v1 = 5, *p1;
    float v2 = 10, *p2;
    char v3 = 'c', *p3;

    p1 = &v1;
    p2 = &v2;
    p3 = &v3;

    printf("Valores antes da mudanca\n");
    printf("v1 = %d\n", v1);
    printf("v2 = %0.2f\n", v2);
    printf("v3 = %c\n\n", v3);

    *p1 = 1;
    *p2 = 2;
    *p3 = 'e';

    printf("Valores depois da mudanca\n");
    printf("v1 = %d\n", v1);
    printf("v2 = %0.2f\n", v2);
    printf("v3 = %c\n", v3);

    return 0;
}
