/* Escreva uma função que dado um número real passado como parâmetro, retorne a parte
inteira e a parte fracionária deste número. Escreva um programa que chama esta função.
Protótipo:
void frac(float num, int *inteiro, float *frac);*/

#include <stdio.h>
#include <stdio.h>

void divisao(float num, int *inteira, float *decimal);

int main()
{
    float num, decimal;
    int inteira;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    divisao(num, &inteira, &decimal);

    printf("Parte inteira: %d\nParte fracionaria: %f\n", inteira, decimal);

    return 0;
}

 void divisao(float num, int *inteira, float *decimal)
{
    *inteira = floor(num);
    *decimal = num - (*inteira);
}