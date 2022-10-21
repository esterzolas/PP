/*35. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎2 + b2. 
Faça um programa que receba os valores de a e b e calcule o valor da hipotenusa através da equação. Imprima o resultado dessa operação.*/


#include <stdio.h>
#include <math.h>
int main (){
    float Ca, Cb, nusa;
    printf ("Digite o valor de a: ");
    scanf ("%f", &Ca);
    printf ("Digite o valor de b: ");
    scanf ("%f", &Cb);
    nusa = sqrt((Ca * Ca) + (Cb * Cb)); // Esse sqrt eh uma funcao da biblioteca <math.h> RAIZ QUADRADA 
    printf("A hipotenusa eh igual a: %0.2f", nusa);
    return 0;
}
