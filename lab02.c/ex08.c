/*08. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula
de conversão é: C = K-273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.*/


#include <stdio.h>
int main(){
    float c, k;
    printf ("Digite uma temperatura em kelvin: ");
    scanf ("%f", &k);
    c = k - 273.15;
    printf("O valor em celsius eh igual a: %0.2f", c);
    return 0;
}