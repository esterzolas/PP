/*27. Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2. A
fórmula de conversão é: M = H*10000, sendo M a área em metros quadrados e H a área em
hectares.*/


#include <stdio.h>
int main (){
    float m, h;
    printf ("Digite uma area em hectares: ");
    scanf ("%f", &h);
    m = h * 10000;
    printf ("O valor em metros eh igual a: %0.2f", m);
    return;
}