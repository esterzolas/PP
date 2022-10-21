/*34. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A
área do círculo é pi*raio2, considere pi = 3.141592.*/


#include <stdio.h>
int main (){
    float raio, area;
    float pi = 3.141592;
    printf ("Digite o valor do raio: ");
    scanf ("%f", &raio);
    area = pi * (raio * raio);
    printf ("A area da circunferencia eh igual: %0.3f", area);
    return 0;
}