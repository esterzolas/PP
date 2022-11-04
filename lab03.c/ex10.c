/*10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
 Homens: (72,7 * h) – 58,0
 Mulheres: (62,1 * h) – 44,7*/

#include <stdio.h>

int main()
{
    float altura, peso_ideal;
    char sexo;
    printf("Indique a altura da pessoa: ");
    scanf("%f", &altura);
    printf("Indique o sexo da pessoa (M para mulher e H para homem): ");
    scanf(" %c", &sexo);
    if (sexo == 'h' || sexo == 'H')
    {
        peso_ideal = (72.7 * altura) - 58.0;
        printf("Peso Ideal: %0.2f", peso_ideal);
    } else if (sexo == 'm' || sexo == 'M')
    {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Peso Ideal: %0.2f", peso_ideal);
    } else { 
        printf("Este programa eh homofobico!");
    }
    return 0;
}