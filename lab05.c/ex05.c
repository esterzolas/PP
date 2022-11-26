/*5. Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo
que o raio é passado por parâmetro.*/

#include <stdio.h>
#include <math.h>

float volume_esfera(float raio);

int main()
{
    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    printf("Volume da esfera: %0.2f", volume_esfera(raio));
    return 0;
}
float volume_esfera(float raio)
{
    float pi = 3.1415;
    return ((4 * pi * pow(raio, 3)) / 3);
}