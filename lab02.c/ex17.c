/*17. Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A
fórmula de conversão é: P = C/2.54, sendo C o comprimento em centímetros e P o comprimento
em polegadas.*/


#include <stdio.h>
int main (){
    float p, c;
    printf ("Digite um comprimento em centimetros: ");
    scanf ("%f", &c);
    p = c / 2.54;
    printf ("O valor em polegadas eh igual a: %0.2f", p);
    return 0;
}