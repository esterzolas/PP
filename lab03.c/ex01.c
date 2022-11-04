/* 1. Faça um programa que receba dois números e mostre qual deles é o maior. */

#include <stdio.h>

int main()
{
    float num1, num2;
    printf("Digite dois numeros (separados por enter): ");
    scanf("%f %f", &num1, &num2);

    if(num1 > num2) {
        printf("O maior numero eh: %0.2f \n", num1);
     }
     else {
         printf("O maior numero eh: %0.2f \n", num2);
    }
     return 0;
}
