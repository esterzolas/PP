/*09. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A fórmula
de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.*/


#include <stdio.h>
int main(){
    float c, k;
    printf ("Digite uma temperatura em Celsius: ");
    scanf ("%f",&c);
    k = c + 273.15;
    printf("O valor em Kelvin eh igual a: %0.2f", k);
    return 0;
}