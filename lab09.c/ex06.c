/*6. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função que retorne a soma do
dobro dos dois números lidos. A função deverá armazenar o dobro de A na própria variável A e o dobro de B na própria variável B. */

#include <stdio.h>

int soma(int *A, int *B);

int main()
{
    int a, b;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &a, &b);

    printf("A soma do dobro dos dois numeros eh: %d", soma(&a, &b));

    return 0;
}

int soma(int *A, int *B)
{

    *A = *A * 2;
    *B = *B * 2;
    return *A + *B;
}