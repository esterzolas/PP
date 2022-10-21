/*36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um
cilindro circular é calculado por meio da seguinte fórmula: V = pi * raio2 * altura, onde pi =
3.141592*/

#include <stdio.h>
int main (){
    float altura, raio, vol;
    float pi = 3.141592;
    printf ("Digite a altura do cilindro: ");
    scanf ("%f", &altura);
    printf ("Digite o raio do cilindro: ");
    scanf ("%f", &raio);
    vol = pi * (raio * raio) * altura;
    printf ("O volume eh igual a: %0.2f", vol);
    return 0;
}