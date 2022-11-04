/*31.Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a
seguir, verifique e mostra qual a classificação dessa pessoa.*/

#include <stdio.h>

int main()
{
    float altura, peso;
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if (altura < 1.20 && peso > 0 && peso <= 60)
    {
        printf("Classificacao: A");
    }
    else if (altura < 1.20 && peso > 60 && peso < 90)
    {
        printf("Classificacao: D");
    }
    else if (altura < 1.20 && peso > 90)
    {
        printf("Classificacao: G");
    }
    else if (altura >= 1.20 && altura <= 1.70 && peso <= 60)
    {
        printf("Classificacao: B");
    }
    else if (altura >= 1.20 && altura <= 1.70 && peso >= 60 && peso <= 90)
    {
        printf("Classificacao: E");
    }
    else if (altura >= 1.20 && altura <= 1.70 && peso > 90)
    {
        printf("Classificacao: H");
    }
    else if (altura > 1.70 && peso > 0 && peso <= 60)
    {
        printf("Classificacao: C");
    }
    else if (altura > 1.70 && peso >= 60 && peso <= 90)
    {
        printf("Classificacao: F");
    }
    else if (altura > 1.70 && peso > 90)
    {
        printf("Classificacao: I");
    }

    return 0;
}