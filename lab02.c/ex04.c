/*04. Leia um número real e imprima o resultado do quadrado desse número.*/


#include <stdio.h>
int main (){
    float num, quadrado;
    printf ("Digite um numero:");
    scanf ("%f", &num);
    quadrado = num * num;
    printf ("O valor total do numero ao quadrado eh: %0.2f", quadrado);
    return 0;
}