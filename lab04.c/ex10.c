/*10. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

#include <stdio.h>

int main(){

    int soma = 0;
    int i;

    for ( i = 0; i <= 50; i+2)
    {
        soma += i; // guarda o valor e soma o proximo numero par
    }
    
    return 0;
}