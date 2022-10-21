/*33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.*/


#include <stdio.h>
int main (){
    float lado, area;
    printf ("Digite o tamanho do lado do quadrado: ");
    scanf ("%f", &lado);
    area = lado * lado;
    printf ("A area do quadrado eh igual a: %0.2f", area);
    return 0;
}
