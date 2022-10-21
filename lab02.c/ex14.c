/*14. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é:
R = G*pi/180, sendo G o ângulo em graus e R em radianos e pi = 3.141592*/


#include <stdio.h>
int main(){
    float g, r;
    float pi = 3.141592;
    printf ("Digite um angulo em graus: ");
    scanf("%f", &g);
    r = (g * pi)/180;
    printf("O valor em radianos eh: %0.2f", r);
    return 0;
}