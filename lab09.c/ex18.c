/*18.  Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio
R. Essa função deve obedecer ao protótipo:

void calc_esfera(float R, float *area, float *volume);

A área da superfície e o volume são dados, respectivamente, por:
A = 4 * pi * R2
V = 4/3 * pi * R3*/

#include <stdio.h>

void calc_esfera(float R, float *area, float *volume);

int main()
{
    float raio, area, volume;

    printf("Entre com o valor do raio:\n");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("Area: %0.2f\nVolume: %0.3f\n", area, volume);

    return 0;
}

void calc_esfera(float R, float *area, float *volume)
{
    float pi = 3.141592;

    *area = 4 * pi * (R * R);
    *volume = 4 / 3 * pi * (R * R * R);
}