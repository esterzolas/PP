/*26. Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares. A
fórmula de conversão é: H = M*0.0001, sendo M a área em metros quadrados e H a área em
hectares.*/


#include <stdio.h>
int main(){
    float m, h;
    printf ("Digite uma area em metros quadrados: ");
    scanf("%f", &m);
    h = m * 0.0001;
    printf("O valor em hectares eh igual a: %0.2f", h);
    return 0;
}