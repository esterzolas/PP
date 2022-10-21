/*.07. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A
fórmula de conversão é: C = 5.0*(F- 32.0)/9.0, sendo C a temperatura em Celsius e F a
temperatura em Fahrenheit.*/


#include <stdio.h>
int main (){
    float c, f;
    printf ("Digite uma temperatura em fahrenheit: ");
    scanf("%f", &f);
    c = 5 * (f - 32.0) /9;
    printf("O valor em celsius eh: %0.2f", c);
    return 0;
}