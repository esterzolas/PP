/*4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:  O número digitado ao quadrado  A raiz quadrada do número digitado */

#include <stdio.h>
#include <math.h>

int main()
{
    float numero, raiz, quadrado;

    printf("Digite um numero real aqui: ");
    scanf("%f", &numero);

    if(numero > 0) {
            quadrado = numero*numero;
            raiz = sqrt(numero);
            printf("O quadrado do numero eh: %0.2f \nA raiz quadrada do numero eh: %0.2f", quadrado, raiz);

    }
}
