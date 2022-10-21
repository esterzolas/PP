/*11. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilômetros por hora). A fórmula de conversão é: K = M*3.6, sendo K a velocidade em km/h e
M em m/s.*/


#include <stdio.h>
int main(){
    float m, k;
    printf ("Digite a velocidade em m/s: ");
    scanf("%f", &m);
    k = m * 3.6;
    printf("O valor em km eh igual a: %0.2f", k);
    return 0;
}