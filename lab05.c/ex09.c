/*9. Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume do
cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula:
𝑉 = pi * raio2 * 𝑎𝑙𝑡𝑢𝑟𝑎, onde pi = 3.141592.*/

#include <stdio.h>

float VolCilindro(float altura, float raio);

int main()
{

    float altura, raio;
    printf("Entre com a altura e o raio do cilindro respectivamente:\n");
    scanf("%f %f", &altura, &raio);

    printf("O volume do cilindro eh: %0.2f", VolCilindro(altura, raio));

    return 0;
}

float VolCilindro(float altura, float raio)
{

    float volume;
    float pi = 3.1415;
    volume = pi * (raio * raio) * altura;
    return volume;
}
