/*22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de
conversão é: M = 0.91*J, sendo J o comprimento em jardas e M o comprimento em metros.*/


#include <stdio.h>
int main (){
    float j, m;
    printf ("Digite um comprimento em jardas: ");
    scanf ("%f", &j);
    m = 0.91 * j;
    printf ("O valor em metros eh igual a: %0.2f", m);
    return 0;
}