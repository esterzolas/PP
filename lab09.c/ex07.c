
/*7. Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B. A função deverá
calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas
deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal. */

#include <stdio.h>

void soma(int *A, int *B);

int main()
{
    int a, b;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &a, &b);

    // depois da mudança
    soma(&a, &b);
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    return 0;
}

void soma(int *A, int *B)
{
    *A = (*A) + (*B);
}