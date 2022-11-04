/*7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números
forem iguais, imprima a mensagem: “Números iguais”. */

#include <stdio.h>

int main()
{
    float num1, num2;
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);
    if (num1 == num2)
    {
        printf("Numeros iguais!!");
    }
    else if (num1 > num2)
    {
        printf("O maior numero eh: %0.2f", num1);
    }
    else
    {
        printf("O maior numero eh: %0.2f", num2);
    }
    return 0;
}
