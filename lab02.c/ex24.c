/*24. Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A
fórmula de conversão é: A = M*0.000247, sendo M a área em metros quadrados e A a área em
acres.*/


#include <stdio.h>
int main( ){
    float m, a;
    printf ("Digite uma area em metros: ");
    scanf ("%f", &m);
    a = m * 0.000247;
    printf ("O valor em acres eh igual a: %0.2f", a);
    return 0;
}