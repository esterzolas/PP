/*15. Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é:
G = R*180/, sendo G o ângulo em graus e R em radianos e  = 3.141592.*/


#include <stdio.h>
int main (){
    float g, r;
    float pi = 3.141592;
    printf ("Digite um angulo em radianos: ");
    scanf("%f", &r);
    g = (r * 180) /pi;
    printf("O valor em graus eh: %0.2f", g);
    return 0;
}